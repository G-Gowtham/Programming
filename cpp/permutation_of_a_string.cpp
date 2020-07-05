#include<bits/stdc++.h>
using namespace std;

vector<string> v;

void permutate(string s,int start,int end)
{
    if(start==end)
    {
        v.push_back(s);
        return;
    }

    for(int i = start;i<=end;i++)
    {
        char a  = s[i];
        s[i] = s[start];
        s[start] = a; 
        permutate(s,start+1,end);
        a  = s[i];
        s[i] = s[start];
        s[start] = a; 
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        v.clear();
        permutate(s,0,s.size()-1);
        
    }

    sort(v.begin(),v.end());

    for(int i = 0 ; i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    return 0;
}