#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int val,n,i;
    cin>>val>>n;
    int a[n],dp[n+1][val+1];

    for(i=0;i<n;i++)
        cin>>a[i];

    memset(dp,0,sizeof(dp));

    for(i=0;i<n+1;i++)
        dp[i][0] = 0;

    for(i=0;i<val+1;i++)
        dp[0][i] = 1000001;

    for(i=1;i<n+1;i++)
    {
        for(int j=1;j<val+1;j++)
        {
            if(a[i-1]>j)
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = min(dp[i-1][j],dp[i][j-a[i-1]]+1);

        }
    }

  

    if(dp[n][val] == 1000001)
        cout<<"-1\n";
    else
        cout<<dp[n][val]<<"\n";    

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        fn();
    }
    return 0;
}