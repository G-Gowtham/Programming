#include <bits/stdc++.h>
using namespace std;

void fn()
{
    long long int n,i=1,pro = 0;
    cin>>n;
    int ans = 0;

    while(pro < n)
    {
        pro += i;
        ans += 1;
        i *= 3;
    }

    cout<<ans<<endl;
}

int main()
{

    fn();

    return 0;
}