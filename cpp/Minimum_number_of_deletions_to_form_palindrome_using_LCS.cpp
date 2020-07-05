#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int n,m;
    cin>>n;

    string a,b;
    cin>>a;
    b = a;
    reverse(b.begin(),b.end());
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<n-dp[n][n]<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        fn();
    }
    return 0;
}