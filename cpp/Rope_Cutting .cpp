#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            cout<<n-i-1<<" ";
        }
    }

    
    cout<<"\n";

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
