#include<bits/stdc++.h>
using namespace std;
const int N = 1e4+5;
long long dp[N];
long long gold[N];
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
        dp[1] =gold[1];
        dp[2] =gold[2];
        if (n == 1)
            cout<<"Case "<<i<<": "<< gold[1]<<endl;
        else if (n == 0)
            cout<<"Case "<<i<<": "<<0<<endl;
        else if (n == 2)
            cout<<"Case "<<i<<": "<<max(gold[1],gold[2])<<endl;

        else
        {
            for(int j=3; j<=n; j++)
            {
                long long  now = 0;
                for(int k=j-2; k>=1; k--)
                {
                    now = max(dp[k],now);
                }
                dp[j]=gold[j]+now;

            }
            cout<<"Case "<<i<<": "<<max(dp[n], dp[n-1])<<endl;
        }
    }
}
