#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int fn()
{
    ll n;
    cin>>n;
    ll sumi = 1;
    
    if(n == 1)
        return 0;
        
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i == 0)
        {  
            sumi += i;
            if(i*i!=n)
                sumi += n/i;
                
        }
    }

    if(sumi == n)
        return 1;
    else
        return 0;
    

}

int main()
{
    int t;
    cin>>t;
    while(t--)
        cout<<fn()<<"\n";
    return 0;
}
