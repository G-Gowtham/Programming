#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    ll n,m,maxi = -1;
    cin>>n;

    ll a[n];

    for(int i=0;i<n;i++)
    {
        ll x;  
        cin>>x;
        a[i] = (-1)*x;
    }
    
    cin>>m;
  
  	sort(a,a+n);
    priority_queue<ll> pq;


    for(int i=0;i<m;i++)
    {
        maxi = max((-1)*a[i],maxi);
        pq.push(a[i]);
    }

    for(int j=m;j<n;j++)
    {
        ll x = pq.top();
        pq.pop();

        x = x + a[j];  
        maxi = max(maxi,(-1)*x);

        pq.push(x);
    }

    cout<<maxi+pq.top()<<"\n";
  
    
}

int main()
{
    fn();
    return 0;
}
