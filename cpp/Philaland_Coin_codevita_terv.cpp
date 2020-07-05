#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n,ans = 0;
    cin>>n;
    
    while(n)
    {
        n >>= 1;
        ans += 1;
    }

    cout<<ans<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();

    return 0;
}