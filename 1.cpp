#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int dp[31];
    Solution()
    {
        dp[0] =0;
        dp[1] =1;
        dp[2] =1;
        for(int i=3; i<31; i++)dp[i] =-1;
    }
    int fib(int n)
    {
        //base case
        if(n==0)return 0;
        if(n>=1 && n<=2)return 1;
        // if the current state is already done then return it
        if(dp[n]!=-1)return dp[n];
        // solve the current state from the small subproblems
        dp[n] =  fib(n-1) + fib(n -2);
        return dp[n];
    }
};
class SolutioN
{
public:
    int dp[31];
    SolutioN()
    {
        dp[0] =0;
        dp[1] =1;
        dp[2] =1;
        for(int i=3; i<31; i++)dp[i] =-1;
    }
    int fib(int n)
    {
        for(int i=3; i<=n; i++)
        {
            dp[i] =  dp[i-1]+ dp[i-2];
        }
        return dp[n];
    }
};
int main()
{
    SolutioN a;
    cout<<a.fib(4);
    return 0;
}
