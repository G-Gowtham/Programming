#include<bits/stdc++.h>
using namespace std;

void fn()
{
    string s,pat;
    cin>>s>>pat;
    int n= s.size(),m=pat.size();
    int l=0,r=0,mini = INT_MAX,index = -1,flag =0;
    int freq[26] = {0},curr_freq[26] = {0},sumi = 0;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(pat.begin(),pat.end(),pat.begin(),::tolower);

    for(int i=0;i<m;i++)
    {
        freq[pat[i]-'a'] += 1;
    }

    while(l<n)
    {

            
        if(l==r)
        {
            flag = 0;
        }
        
        if(r==n || flag == 1)
        {
            if(freq[s[l]-'a']>0)
                curr_freq[s[l]-'a'] -= 1;
            l += 1;
        }
        else
        {
            if(freq[s[r]-'a']>0)
                curr_freq[s[r]-'a'] += 1;
            r += 1;
        }


        sumi = 0;
        for(int i=0;i<26;i++)
        {
            if(freq[i] != 0)
            {
                if(freq[i]<=curr_freq[i])
                    sumi += freq[i]; 
            }
        }


        if(sumi == m)
        {
            flag = 1;
            if(mini > r-l)
            {
                index = l;
                mini = r-l;
            }
        }
        else
        {
            flag = 0;
        }
        
    }

    //cout<<index<<" "<<mini<<endl;
    if(index != -1)
    {
        for(int i=index;i<index+mini;i++)
            cout<<s[i];
    }
    else
        cout<<"-1";
        
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