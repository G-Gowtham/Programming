#include <bits/stdc++.h>
#define mod 1000000000;
typedef long long ll;
using namespace std;

//(2^n-1) - 2

void fn()
{
    int n;
    cin>>n;
    string ans = "";
    while(n)
    {
        if(n&1)
        {
            n = (n-1)/2;
            ans = "3"+ans;
        }
        else
        {
            n = (n-2)/2;
            ans = "4"+ans;
        }
        
    }

    cout<<ans<<endl;
}

int main()
{
    fn();
    return 0;
}