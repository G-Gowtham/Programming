#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

ll fn(ll n)
{
    ll ans = 1;

    for(int i=2;i<=n+1;i++)
        ans *= i;

    return ans;
}

int main()
{
    ll n;
    cin>>n;
    cout<<fn(n);
    return 0;
}
