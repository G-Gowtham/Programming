#include <bits/stdc++.h>
typedef long long ll;
#define mod 1000000007;
using namespace std;

int main()
{
    ll n,i=1;
    cin>>n;

    while(i<n)
        i = i*2+1;
    
    if(i==n)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
