#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int task[N];
long long dp[N];
long long frequ[N];
long long solv(int num);
int main()
{
    for( int i=0; i<=N; i++)dp[i] =-1;
    int n;
    cin>>n;
    int maxx = 0;
    for(int i=1; i<=n; i++)
    {
        cin>>task[i];
        frequ[task[i]]+=task[i];
        maxx = max(task[i],maxx);
    }
    int secondMax =0;
    for(int i=1; i<maxx; i++)
        secondMax = max(task[i],secondMax);
    dp[0] =0;
    dp[1]=frequ[1];
    cout<<max(solv(maxx),solv(secondMax));
    return 0;
}
long long solv(int num)
{
    if (num <= 1)return dp[num];
    if(dp[num]!=-1)return dp[num];
    dp[num] = max(solv(num-1),solv(num-2)+frequ[num]);
    return dp[num];
}
