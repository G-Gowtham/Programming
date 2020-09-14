#include <bits/stdc++.h>
using namespace std;

void fn()
{

    int n,i,start,end;
    map<int,int> ans;
    cin>>n;
    int a[2*n];
    for(i=0;i<(2*n);i++)
        cin>>a[i];
    map<int,int> m;

    for(i=0;i<2*n;i+=2)
    {
        if(m.find(a[i]) == m.end())
            m[a[i]] = a[i+1];
        else
            m[a[i]] = max(m[a[i]],a[i+1]);
    }

    auto j = m.begin(); 
    start = j->first;
    end = j->second;
    j++;
    for(;j!=m.end();j++)
    {
        //cout<<start<<" "<<end<<" "<<j->first<<" "<<j->second<<" \n";
        if(end >= j->first)
        {
            end = max(end,j->second);
        }
        else
        {
            //cout<<start<<" "<<end<<j->first<<" "<<j->second<<" \n";
            ans[start] = end;
            start = j->first;
            end = j->second;
        }
    }
    ans[start] = end;

    for(auto k:ans)
        cout<<k.first<<" "<<k.second<<" ";
    cout<<"\n";

}

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        fn();
    }
	return 0;
}