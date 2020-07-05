#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007;
using namespace std;

//(2^n-1) - 2
ll find(ll n)
{
    if(n==0)
        return 1;
        
    if(n & 1)
    {
        ll x = find(n/2);
        return ((x*x)*2)%mod;
    }
    else
    {
        ll x = find(n/2);
        return (x*x)%mod; 
    }
    
}

int main()
{
    ll n,ans = 0;
    cin>>n;
    cout<<find(n-1)-2<<endl;
    return 0;
}
