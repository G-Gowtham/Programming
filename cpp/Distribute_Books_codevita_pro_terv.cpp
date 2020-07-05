#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll a[n+1]={0};
    a[1] = 0;
    a[2] = 1;
    
    for(int i=3;i<=n;i++)
        a[i] = ((i-1)*(a[i-1]+a[i-2]))%mod;
    
    cout<<a[n];
    return 0;
}
