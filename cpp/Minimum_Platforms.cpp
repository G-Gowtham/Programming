#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    int n;
    cin>>n;

    vector<pair<int,int>> v(n,{0,0});
    priority_queue<int> pq;
    int i,count = 1;

    for(i=0;i<n;i++)
        cin>>v[i].first;
    for(i=0;i<n;i++)
        cin>>v[i].second;

    sort(v.begin(),v.end());

    pq.push(v[0].second*(-1));


    for(i = 1;i<n;i++)
    {
        if(pq.top()*(-1)<v[i].first)
            pq.pop();
        else
            count += 1;

        pq.push(v[i].second*(-1));
    }
    
    cout<<count<<"\n";
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
