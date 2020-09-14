#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int gcd(int a,int b)
{
    if(b == 0)
        return a;
    
    return gcd(b,a%b);
}

void fn()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int ans = a[0];

    for(int i=1;i<n;i++)
        ans = gcd(ans,a[i]);

    cout<<ans<<"\n";
    
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
