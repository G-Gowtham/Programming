// { Driver Code Starts
// C++ program to find out whether a given graph is Bipartite or not.
// It works for disconnected graph also.
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
bool isBipartite(int G[][MAX],int V);
int main()
{
    int t;
	cin>>t;
	int g[MAX][MAX];
	while(t--)
	{
		memset(g,0,sizeof (g));
		int n;
		cin>>n;
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>g[i][j];
			}
		}
		
		cout<<isBipartite(g,n)<<endl;
	}
	return 0;
}

int bfs(int i,int v,int *color,int g[][MAX])
{
    queue<int> q;

    for(int j=0;j<v;j++)
    {
        if(g[i][j] == 1)
            q.push(j);
    }

    while(q.size()>0)
    {
        int x = q.front();
        if(color[x] == -1)
            color[x] = color[i]*-1+1;
        else if(color[i] == color[x])
            return 0;
        q.pop();
    }
    return 1;
}

bool isBipartite(int g[][MAX],int v)
{
    
    int color[v];
    memset(color,-1,sizeof(color));

    for(int i=0;i<v;i++)
    {
        if(color[i] == -1)
            color[i] = 0;
        if(g[i][i] == 1)
            return 0;
        
        if(bfs(i,v,color,g) == 0)
            return 0;
    }

    return 1;
    
}