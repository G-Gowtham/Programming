#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,ans=1;
    cin>>n;
    while(n%2 == 0)
    {
        n = n/2;
        ans *= 2;
    }

    cout<<ans;
    return 0;
}
