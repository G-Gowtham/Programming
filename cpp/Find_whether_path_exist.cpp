#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n,r,c,i,j,k,fc,fr;
    cin>>n;
    int mat[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j] == 1)
            {
                r = i;
                c = j;
            }
            else if(mat[i][j] == 2)
            {
                fr = i;
                fc = j;
            }
        }

    int dp[n][n];
    memset(dp,0,sizeof(dp));
    
    dp[r][c] = 1; 


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j] > 1)
            {
                if( i>0 and dp[i-1][j]==1)
                {
                    dp[i][j] =1;
                    continue;
                }
                if( i<n-1 and dp[i+1][j] ==1)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if( j>0 and dp[i][j-1]==1)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if( j<n-1 and dp[i][j+1] == 1)
                {
                    dp[i][j] = 1;
                    continue;
                }
            }
        }
    }

    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            if(mat[i][j] > 1)
            {
                if( i>0 and dp[i-1][j]==1)
                {
                    dp[i][j] =1;
                    continue;
                }
                if( i<n-1 and dp[i+1][j] ==1)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if( j>0 and dp[i][j-1]==1)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if( j<n-1 and dp[i][j+1] == 1)
                {
                    dp[i][j] = 1;
                    continue;
                }
            }
        }
    }

for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mat[i][j] > 1)
            {
                if( i>0 and dp[i-1][j]==1)
                {
                    dp[i][j] =1;
                    continue;
                }
                if( i<n-1 and dp[i+1][j] ==1)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if( j>0 and dp[i][j-1]==1)
                {
                    dp[i][j] = 1;
                    continue;
                }
                if( j<n-1 and dp[i][j+1] == 1)
                {
                    dp[i][j] = 1;
                    continue;
                }
            }
        }
    }


    // for(i=0;i<n;i++)
    // {
    //     for(j=0;j<n;j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"\n";

    return dp[fr][fc];
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