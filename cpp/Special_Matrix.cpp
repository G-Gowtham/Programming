#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int r,c,i,j,k;
    cin>>r>>c>>k;
    int dp[r][c];
    memset(dp,-1,sizeof(dp));
    int blocked[2*k];
    for(i=0;i<2*k;i+=2)
    {
        cin>>blocked[i]>>blocked[i+1];
        dp[blocked[i]-1][blocked[i+1]-1] = 0;
    }

    if(dp[0][0] == 0)
        return -1;

    for(i=1;i<c;i++)
    {
        if(dp[0][i] == -1)
        {
            if(dp[0][i-1]==0)
                dp[0][i] = 0;
            else
                dp[0][i] = 1;
        }
    }
    
    for(i=1;i<r;i++)
    {
        if(dp[i][0]==-1)
        {
            if(dp[i-1][0]==0)
                dp[i][0] = 0;
            else
                dp[i][0] = 1;
        }
    }

    for(i=1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(dp[i][j] == -1)
                dp[i][j] = (dp[i][j-1]+dp[i-1][j])%1000000007;
        }
    }
    

    // for(i=0;i<r;i++)
    // {
    //     for(j=0;j<c;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

    return dp[r-1][c-1];
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cout<<fn()<<"\n";
    }
    return 0;
}