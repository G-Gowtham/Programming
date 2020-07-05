#include<bits/stdc++.h>
using namespace std;

int mini = 0;

void find(string s,int i,int j,int count)
{
    if(i>=j)
    {
        mini = min(mini,count);
        return;
    }
    if(s[i] == s[j])
    {
        find(s,i+1,j-1,count);
    }
    else
    {
        find(s,i+1,j,count+1);
        find(s,i,j-1,count+1);
    }
}
int main()
{

    int t;

    while(t--)
    {
        string s;
        cin>>s;
        mini = INT_MAX;
        find(s,0,s.size()-1,0);
        cout<<mini<<"\n";
    }
    return 0;
}