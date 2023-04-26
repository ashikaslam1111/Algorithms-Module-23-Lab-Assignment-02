#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int operation =0;
    cin>>n;
    while(n!=1)
    {
        operation++;
        if(n%3==0 )n=n/3;
        else if(n%2==0)n=n/2;
        else n=n-1;
    }
    cout<<operation;
    return 0;
}
