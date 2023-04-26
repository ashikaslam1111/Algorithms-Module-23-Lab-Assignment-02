#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
long long dp[N];
long long gold[N];
long long solv(int n);
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> gold[i];
            dp[i] = -1;
        }
        long long a = solv(n);
        long long b = solv(n-1);
        if (n == 1)
            cout<<"Case "<<i<<": "<< gold[1]<<endl;
        else if (n == 0)
            cout<<"Case "<<i<<": "<<0<<endl;
        else
            cout<<"Case "<<i<<": "<<max(a, b)<<endl;
    }
}
long long solv(int n)
{
// base case
    if(n<=0)return 0;
    if(n==1)return gold[1];
// if the current state is already done then return it
    if(dp[n]!=-1)return dp[n];
// solve the current state from the small subproblem
    long long now =0;
    for(int i = n-2; i>=0; i--)
        now = max(now,solv(i)+gold[n]);
    dp[n]=now;
    return now;
}
