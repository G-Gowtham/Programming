#include<bits/stdc++.h>
using namespace std;

bool possible()
{
    int n,i,sum = 0,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 2 != 0)
        return false;
    sum = sum/2;
    bool dp[n+1][sum+1];
    for(i=0;i<n+1;i++)
        dp[i][0] = true;
    for(i=1;i<sum+1;i++)
        dp[0][i] = false;
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<sum+1;j++)
        {
            dp[i][j] = dp[i-1][j];
            if( j >= a[i-1])
                dp[i][j] = dp[i][j] || dp[i-1][j-a[i-1]];
        }
    }
    // for(i=1;i<n+1;i++)
    // {
    //     for(j=1;j<sum+1;j++)
    //     {
    //         cout<<dp[i][j];
    //     }
    //     cout<<"\n";
    // }
    return dp[n][sum];

}
int main()
{
int t;
cin >>t;
while(t--)
{
    if (possible())
        printf("YES\n");
    else
        printf("NO\n");
}
return 0;
}

