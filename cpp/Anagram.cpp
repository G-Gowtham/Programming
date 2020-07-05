#include<bits/stdc++.h>
using namespace std;

string fn()
{
    int alpha[26] = {0};
    string a,b;
    cin>>a>>b;

    for(int i=0;i<a.size();i++)
        alpha[a[i]-'a'] += 1;
    
    for(int i=0;i<b.size();i++)
        alpha[b[i]-'a'] -= 1;
    
    for(int i=0;i<26;i++)
        if(alpha[i] != 0)
            return "NO";
    return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        cout<<fn()<<"\n";

    return 0;
}