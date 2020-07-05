#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int gcd(int n1,int n2)
{
    if(n2==0)
        return n1;
    return gcd(n2,n1%n2);
}

int main()
{
    int n1,n2,t;
    cin>>t;
    while(t--)
    {
    cin>>n1>>n2;
    cout<<gcd(n1,n2);
    }
    return 0;
}


