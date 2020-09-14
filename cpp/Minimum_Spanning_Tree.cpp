// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int spanningTree(int V,int E,vector<vector<int> > graph);
// Driver code

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int V,E;
        cin>>V>>E;
        vector< vector<int> > graph(V,vector<int>(V,INT_MAX));

        while(E--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            u--,v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }

        cout<<spanningTree(V,E,graph)<<endl;
    }
    return 0;
}

// } Driver Code Ends


// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX

int find_set(int *a,int n)
{
    if(a[n] == 0)
        return n;
    find_set(a,a[n]);
}


int spanningTree(int v,int e,vector<vector<int> > graph)
{
    vector<pair<int,pair<int,int>>> table;
    int sets[v+1];

    for(int i = 0;i<v;i++)
    {
        for(int j=i+1;j<v;j++)
        {
            if(graph[i][j] != INT_MAX)
            {
                table.push_back({graph[i][j],{i+1,j+1}});
            }
        }
    }

    sort(table.begin(),table.end());

    //make_set
    for(int i=0;i<v+1;i++)
        sets[i] = 0;


    int ans = 0,edges =0;

    for(int i=0;i<table.size();i++)
    {
        if(edges == v-1)
            break;

        int x = find_set(sets,table[i].second.first) , y = find_set(sets,table[i].second.second);
        if(x != y)
        {
            ans += table[i].first;
            
            //union
            sets[x] = y;
            edges += 1;
        }
    }
    return ans;
}