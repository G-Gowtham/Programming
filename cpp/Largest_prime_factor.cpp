#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    ll n,tmp;
    cin>>n;
    int ans = 2;

    while(n%2 == 0)
        n/=2;

    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
                n/=i;
            ans = i;
        }
    }

    if(n>2)
        ans = n;

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
