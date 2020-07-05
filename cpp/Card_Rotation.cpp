#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n],count = 1;
    queue<int> q;

    for(int i=1;i<=n;i++)
        q.push(i);
    
    while(!q.empty())
    {
        int i = count;

        while(i)
        {
            q.push(q.front());
            q.pop();
            i -= 1;
        }

        a[q.front()-1] = count;
        count += 1;
        q.pop();
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
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