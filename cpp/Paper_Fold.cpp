#include <bits/stdc++.h>
#define mod 1000000000;
typedef long long ll;
using namespace std;

//(2^n-1) - 2

//base**n
ll find(ll base,ll n)
{
    if(n==0)
        return 1;
        
    if(n & 1)
    {
        ll x = find(base,n/2);
        return ((x*x)*base)%mod;
    }
    else
    {
        ll x = find(base,n/2);
        return (x*x)%mod; 
    }
    
}

int main()
{
    ll n,ans,paper;
    cin>>paper>>n;
 	ans = (find(2,n)*paper)%mod;
    cout<<ans<<endl;
    return 0;
}