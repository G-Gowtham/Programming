#include <bits/stdc++.h>
using namespace std;

class Trie
{
    public:
        map<char,Trie*> m{};
        bool end_of_word = false;
};

void make_trie(Trie *root,string s,int start,int end)
{
    if(start==end)
    {      
            root->end_of_word = true;
            return;
    }

    Trie *node;
    if((root->m).find(s[start]) == (root->m).end())
    {
        node = new Trie();
        root->m[s[start]] = node;
    }
    else
    {
        node = root->m[s[start]];
    }
    make_trie(node,s,start+1,end);
}

bool search(Trie *root,string s,int start,int end)
{
    if(start==end)
        return root->end_of_word;
    
    Trie *node;
    if((root->m).find(s[start]) != (root->m).end())
    {
        node = root->m[s[start]];
    }
    else
    {
        return false;
    }
    return search(node,s,start+1,end);
}

void fn()
{
    int n,i;
    vector<string> v;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
    {
        string tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    cin>>s;
    Trie *root = new Trie();
    for(i=0;i<n;i++)
    {
        make_trie(root,v[i],0,v[i].size());
    }
    cout<<search(root,s,0,s.size())<<"\n";
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