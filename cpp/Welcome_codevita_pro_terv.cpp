#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n,ans = 0;
    cin>>n;
    ans = (n*(n-1))/2;
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