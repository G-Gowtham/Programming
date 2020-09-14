// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
/* This function is used to detect a cycle in undirected graph
*  adj[]: array of vectors to represent graph
*  V: number of vertices
*/

int find_parent(int parent[],int i)
{
    if(parent[i]== -1)
        return i;
    else
        return find_parent(parent,parent[i]);
}

void uni(int parent[], int x, int y)  
{  
    // int xset = find_parent(parent, x);  
    // int yset = find_parent(parent, y);  
    // cout<<x<<y<<xset<<yset;
    // parent[xset] = yset;
    parent[x] = y;

} 

bool isCyclic(vector<int> adj[], int v)
{
    vector<int> dir_vect;

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            if(adj[i][j]>=i)
            {
                dir_vect.push_back(i);
                dir_vect.push_back(adj[i][j]);
            }
        }
    }
   int parent[v];
   memset(parent,-1,sizeof(parent));
   for(int i = 0;i<dir_vect.size();i+=2)
   {
       int x = find_parent(parent,dir_vect[i]);
       int y = find_parent(parent,dir_vect[i+1]);

       if(x==y)
            return true;

       uni(parent,x,y); 
   } 
   return false;
   
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array of vectors to represent graph
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adding edge to the graph
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
  // } Driver Code Ends