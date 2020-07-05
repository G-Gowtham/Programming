#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n,i,j;
    cin>>n;
    int mat[n][n];
    
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>mat[i][j];

    int dp[n][n];
    memset(dp,0,sizeof(dp));
    dp[0][0] = mat[0][0];

    for(i=1;i<n;i++)
                    dp[0][i] = dp[0][i-1]+mat[0][i];


            for(i=1;i<n;i++)
                    dp[i][0] = dp[i-1][0]+mat[i][0];


            for(i=1;i<n;i++)
                for(j=1;j<n;j++)
                        dp[i][j] = min(dp[i-1][j],dp[i][j-1]) + mat[i][j];


            for(i=n-2;i>=0;i--)
                    dp[i][n-1] = min(dp[i][n-1],dp[i+1][n-1]+mat[i][n-1]);

            for(i=n-2;i>=0;i--)
                    dp[n-1][i] = min(dp[n-1][i],dp[n-1][i+1]+mat[n-1][i]);

            for(i=n-2;i>=0;i--)
                for(j=n-2;j>=0;j--)
                    dp[i][j] = min(dp[i][j],min(dp[i][j+1]+mat[i][j],dp[i+1][j]+mat[i][j]));

   for(int k=0;k<=(int)sqrt(n);k++)
    {

        for(i=1;i<n;i++)
                dp[0][i] = min(dp[0][i],dp[0][i-1]+mat[0][i]);

        for(i=1;i<n;i++)
                dp[i][0] = min(dp[i][0],dp[i-1][0]+mat[i][0]);


        for(i=1;i<n;i++)
            for(j=1;j<n;j++)
                    dp[i][j] = min(dp[i][j],min(dp[i-1][j]+mat[i][j],dp[i][j-1]+mat[i][j]));
    


        for(i=n-2;i>=0;i--)
                dp[i][n-1] = min(dp[i][n-1],dp[i+1][n-1]+mat[i][n-1]);


        for(i=n-2;i>=0;i--)

                dp[n-1][i] = min(dp[n-1][i],dp[n-1][i+1]+mat[n-1][i]);


        for(i=n-2;i>=0;i--)
            for(j=n-2;j>=0;j--)

                dp[i][j] = min(dp[i][j],min(dp[i][j+1]+mat[i][j],dp[i+1][j]+mat[i][j]));


        for(i=1;i<n;i++)
            for(j=1;j<n;j++)
                    dp[i][j] = min(dp[i][j],min(dp[i-1][j]+mat[i][j],dp[i][j-1]+mat[i][j]));
    }

    
    
    return dp[n-1][n-1];
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


// 1       1       1       1       2000        2000        2000 
// 2000    2000    2000    1       2000        2000        2000
// 1       1       1       1       2000        2000        2000
// 1       2000     2000   2000    1           1           1
// 1       2000     1      1       1           2000        1
// 1       1       1       2000    2000        2000        1
// 2000    2000    2000    2000    2000        2000        1