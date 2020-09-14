#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

ll fn()
{
    int n,m,x;
    cin>>m>>n>>x;
    long long int dp[n+1][x+1];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<=m && i<=x;i++)
        dp[1][i] = 1;
    
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=j-1;k>0&&k>j-m-1;k--)
            {
                dp[i][j] += dp[i-1][k];
            }
        }
    }

    //optimised tech
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=x;j++)
        {
            dp[i][j] = dp[i][j-1]+dp[i-1][j-1];

            if(j-m-1>0)
                dp[i][j] -= dp[i-1][j-m-1]
        }
    }
    
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=0;j<=x;j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<"\n";
    // }
    return dp[n][x];
}


int main()
{
    int t;
    cin>>t;

    while(t--)
        cout<<fn()<<"\n";
    return 0;
}
