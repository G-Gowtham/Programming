#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n,ans = 0;
    cin>>n;
    
    
    for(int i=1;i<n/2;i++)
        if(n%i == 0)
            cout<<i<<" ";
    cout<<n<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        fn();
    return 0;
}