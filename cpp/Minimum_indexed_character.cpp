#include <bits/stdc++.h>
using namespace std;

char fn()
{
    string s,pat;
    cin>>s;
    cin>>pat;

    for(int i = 0;i<s.size();i++)
    {
        for(int j=0;j<pat.size();j++)
        {
            if(s[i] == pat[j])
                return s[i];
        }
    }

    return '$';
}

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        cout<<fn()<<"\n";
    }
	return 0;
}