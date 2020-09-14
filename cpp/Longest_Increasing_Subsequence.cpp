#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n;
    cin>>n;
    int a[n],dp[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
        dp[i] = 1;
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }

    // for(int i=0;i<n;i++)
    //     cout<<dp[i];

    return *max_element(dp,dp+n);

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
