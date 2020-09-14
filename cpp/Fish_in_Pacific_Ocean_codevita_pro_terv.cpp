#include <bits/stdc++.h>
//#define mod 1000000007;
typedef long long ll;
using namespace std;
ll mod=1000000007;
// 0 1
// 1 1
void mul(ll *a,ll *b)
{
    ll tmp[] = {0,0,0,0};
    tmp[0] = ((a[0]*b[0])%mod) + ((a[1]*b[2])%mod);
    tmp[1] = ((a[0]*b[1])%mod) + ((a[1]*b[3])%mod);
    tmp[2] = ((a[2]*b[0])%mod) + ((a[3]*b[2])%mod);
    tmp[3] = ((a[2]*b[1])%mod) + ((a[3]*b[3])%mod);
    a[0] = tmp[0]%mod;
    a[1] = tmp[1]%mod;
    a[2] = tmp[2]%mod;
    a[3] = tmp[3]%mod;
} 

void fib_mat(ll *a,ll n)
{
    if(n <= 1)
        return;
    
    fib_mat(a,n/2);
    mul(a,a);
    ll tmp[] = {0,1,1,1};
    
    if(n&1)
        mul(a,tmp);
}

ll find(ll x,ll y, ll n)
{
    ll a[] = {0,1,1,1};
    fib_mat(a,n);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<"\n";  
    ll ans = (a[0]*x)+(a[1]*y)%mod;  
    return ans;
}

int main()
{
    int t;
    cin>>t;
    vector<ll> x,y,n;

    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        x.push_back(a);
        y.push_back(b);
        n.push_back(c);
    }

    for(int i=0;i<n.size();i++)
        cout<<find(x[i],y[i],n[i])<<"\n";

    return 0;
}


