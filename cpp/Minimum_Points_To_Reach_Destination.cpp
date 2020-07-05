#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int r,c,i,j;
    cin>>r>>c;
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>a[i][j];
       
    int dp[r][c];
    memset(dp,0,sizeof(dp));

    if(a[r-1][c-1]>0)
        dp[r-1][c-1] = 1;
    else
        dp[r-1][c-1] = a[r-1][c-1] * (-1) + 1;

    for(i=r-2;i>=0;i--)
    {
        dp[i][c-1] = max(dp[i+1][c-1]-a[i][c-1],1);
    }

    for(i=c-2;i>=0;i--)
    {
        dp[r-1][i] = max(dp[r-1][i+1]-a[r-1][i],1);
    }


    for(i=r-2;i>=0;i--)
    {
        for(j=c-2;j>=0;j--)
        {
            int mini = min(dp[i][j+1],dp[i+1][j]);
            dp[i][j] = max(mini-a[i][j],1);
        }
    }


    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout<<dp[i][j]<<" ";
        cout<<"\n";
    }
    
 cout<<dp[0][0]<<"\n";
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