#include <bits/stdc++.h>
using namespace std;

void combination(vector<string> &v,int a[],int data[],int start,int end,int index)
{
    
    string tmp = "";
    for (int j = 0; j < index; j++) 
	{
        tmp += " "+ to_string(data[j]);
    }

    v.push_back(s.substr(0,index));
    
    for(int i=start;i<=end;i++)
    {
        data[index] = a[i];
        combination(v,a,data,i+1,end,index+1);
    }
}

void fn()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    vector<string> v;
    int data[n];

    combination(v,a,data,0,n-1,0);
    
    map<string,int> m;
    cout<<"()";
    for(int i=1;i<v.size();i++)
    {
        if(m.find(v[i]) == m.end())
        {
            cout<<"("<<v[i].substr(1)<<")";
            m[v[i]] = 1;
        }
    }
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