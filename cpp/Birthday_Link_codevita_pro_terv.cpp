#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll ans = 0,t=0,one=1;

    while(n)
    {
        if(n&1)
            ans += (one<<t);
        t += 2;
        n = n>>1;
    }
    cout<<ans;
    return 0;
}

1   1   00001   0
2   4   00100   2
3   5   00101   2,0
4   16  10000   4
5   17  10001   4,0
6   20  10100   4,2
7   21  10101   4,2,0
111
420

