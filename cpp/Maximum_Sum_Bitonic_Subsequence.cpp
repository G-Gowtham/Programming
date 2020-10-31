#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];
    int left[n],right[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        left[i] = a[i];
        right[i] = a[i];
    }
    


    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
                left[i] = max(a[i]+left[j],left[i]);
            
        }
    }

    for(int i=n-2;i>=0;i--)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[i]>a[j])
                right[i] = max(a[i]+right[j],right[i]);

        }
    }

    int maxi = 0;

    for(int i=0;i<n;i++)
    {
        maxi = max(maxi, left[i]+right[i]-a[i]);
    }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<left[i]<<" ";
    // }

    // cout<<"\n";

    // for(int i=0;i<n;i++)
    // {
    //     cout<<right[i]<<" ";
    // }

    cout<<maxi<<"\n";
    return;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
