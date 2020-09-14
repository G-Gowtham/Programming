#include <bits/stdc++.h>
using namespace std;

void fn()
{
    string a,b;
    cin>>a>>b;
    int n,m,sumi=0;
    n = a.size();
    m = b.size();

    int alpha[26] = {0};

    for(int i=0;i<n;i++)
        alpha[a[i]-'a'] += 1;
    
    for(int j=0;j<m;j++)
        alpha[b[j]-'a'] -= 1;
    
    for(int i=0;i<26;i++)
        sumi += abs(alpha[i]);

    queue<char> q;
    q.push('F');
    q.push('L');
    q.push('A');
    q.push('M');
    q.push('E');
    q.push('S');

    //cout<<sumi;

    while(q.size()!=1)
    {
        int tmp = sumi;
        while(tmp!=1)
        {
            q.push(q.front());
            q.pop();
            tmp --;
        }
        q.pop();
    }

    cout<<q.front()<<endl;
}

int main()
{
    fn();
    return 0;
}

