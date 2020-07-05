#include<bits/stdc++.h>
using namespace std;

// bool comp(pair<int,int> &a, pair<int,int> &b)
// {
//     if(a.second == b.second)
//         return a.first > b.first;
//     return a.second < b.second;
// }

struct comp{
bool operator()(pair<int,int> &a,pair<int,int> &b)
{
    if(a.second==b.second)
    return a.first>b.first;
    return a.second<b.second;
}
};

void fn()
{
    int n,k;
    cin >> n >> k;
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        int key,count = 0;
        cin>>key; 
        umap[key]++;
        //priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq(m1.begin(),m1.end());
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq(umap.begin(),umap.end());
        while(!pq.empty() and count<k)
        {
            cout<<(pq.top()).first<<' ';
            pq.pop();
            count += 1;
        }

    }
    cout<<"\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fn();
    }
    return 0;
}