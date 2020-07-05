#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int r,c,i,j,fr,fc;
    cin>>r>>c;
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    cin>>fr>>fc;

    if(mat[fr][fc] == 0 or mat[0][0] == 0)
        return -1;

    int dp[r][c];
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;

    for(i=1;i<c;i++)
    {
        //cout<<mat[0][i]<<" "<<dp[0][i-1]<<" "<<i<<" test\n";
        if(mat[0][i]==1 and dp[0][i-1] != 0)
            dp[0][i] = dp[0][i-1]+1;
    }

    for(i=1;i<r;i++)
    {
        if(mat[i][0]==1 and dp[i-1][0] != 0)
            dp[i][0] = dp[i-1][0]+1;
    }

    for(i=1;i<r;i++)
    {
        for(j=1;j<c;j++)
        {
            if(mat[i][j] == 1 and dp[i-1][j] != 0 and dp[i][j-1] != 0)
                dp[i][j] = min(dp[i-1][j],dp[i][j-1])+1;
            else if(mat[i][j] == 1 and dp[i-1][j] != 0 and dp[i][j-1] == 0)
                dp[i][j] = dp[i-1][j]+1;
            else if(mat[i][j] == 1 and dp[i-1][j] == 0 and dp[i][j-1] != 0)
                dp[i][j] = dp[i][j-1]+1;
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

    for(i=r-2;i>=0;i--)
    {
        if(mat[i][c-1]==1 and dp[i][c-1] == 0 and dp[i+1][c-1] != 0)
            dp[i][c-1] = dp[i+1][c-1]+1;
    }

    for(i=c-2;i>=0;i--)
    {
        if(mat[r-1][i]==1 and dp[r-1][i] == 0 and dp[r-1][i+1] != 0)
            dp[r-1][i] = dp[r-1][i+1]+1;
    }

    for(i=r-2;i>=0;i--)
    {
        for(j=c-2;j>=0;j--)
        {
            if(mat[i][j] == 1 and dp[i][j] == 0)
            {
            if(dp[i+1][j] != 0 and dp[i][j+1] != 0)
                dp[i][j] = min(dp[i+1][j],dp[i][j+1])+1;
            else if(dp[i+1][j] != 0 and dp[i][j+1] == 0)
                dp[i][j] = dp[i+1][j]+1;
            else if(dp[i+1][j] == 0 and dp[i][j+1] != 0)
                dp[i][j] = dp[i][j+1]+1;
            }
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

    return dp[fr][fc]-1;
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