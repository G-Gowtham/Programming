#include<bits/stdc++.h>
using namespace std;

void for_even(string s)
{
    int n = s.size();
    cout<<s[n-1]<<s.substr(0,n-1)<<"\n";
}
void for_odd(string s)
{
    int n = s.size();
    cout<<s.substr(2,n-2)<<s[0]<<s[1]<<"\n";
}

int main()
{
    string a;
    getline(cin,a);
    vector<string> v;
    vector<string> r;
    int n = a.size();
    string tmp;
    int i=0;

    while(i<n)
    {
        tmp = "";
        if(a[i]>96)
        {
            while(true)
            {
                tmp += a[i];
                if(i+1 == n || a[i+1]<96)
                    break;
                i += 1;
            }
            v.push_back(tmp);
        }
        else
        {
            while(true)
            {
                tmp  += a[i];

                if(i+1 == n || a[i+1]>96)
                    break;
                i += 1;
            }
            r.push_back(tmp);
        }
        
    i += 1;            
    }

    for(i=0;i<v.size();i++)
    {
        string num = r[i];
        int sumi = 0;
        for(int i=0;i<num.size();i++)
        {
            sumi += ((num[i]-'0')*(num[i]-'0'));
        }

        if(sumi&1)
            for_odd(v[i]);
        else
            for_even(v[i]);
        
    }

    return 0;
}
