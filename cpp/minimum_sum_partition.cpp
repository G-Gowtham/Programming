#include<bits/stdc++.h>
using namespace std;

int part()
{
    int n,i,sum = 0,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    bool dp[n+1][sum+1];
    for(i=0;i<n+1;i++)
        dp[i][0] = true;
    for(i=1;i<sum+1;i++)
        dp[0][i] = false;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<sum;j++)
        {
            dp[i][j] = dp[i-1][j];
            if( j >= a[i-1])
                dp[i][j] = dp[i][j] || dp[i-1][j-a[i-1]];
        }
    }
    int part1 = 0;
    for(i=sum/2;i<sum;i++)
    {
        if(dp[n][i] == true)
        {
            part1 = i;
            break;
        }
    }
    cout<<abs(sum-(2*part1))<<"\n";
    // for(i=1;i<n+1;i++)
    // {
    //     for(j=1;j<sum+1;j++)
    //     {
    //         cout<<dp[i][j];
    //     }
    //     cout<<"\n";
    // }
    return 0;

}
int main()
{
int t;
cin >>t;
while(t--)
{
   int out = part();
}
return 0;
}

