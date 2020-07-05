#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int n,m;
    string a,b;
    cin>>n>>a;
    b = a;
  	m = n;
    int dp[n+1][m+1];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<m+1;j++)
        {
            if(a[i-1]==b[j-1] && i != j)
            {
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n][m]<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        fn();
        
    return 0;
}