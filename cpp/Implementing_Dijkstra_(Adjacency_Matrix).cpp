// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

void dijkstra(vector<vector<int>> , int ,int );


int main()
{
    int t;
    int V;
    cin>>t;
    while(t--){
        cin>>V;
        
        vector<vector<int>> g(V);
        
        for(int i = 0;i<V;i++){
            vector<int> temp(V);
            g[i] = temp;
        }
        
        for(int i=0;i<V;i++)
        {
      	    for(int j=0;j<V;j++)
      	    {
      		    cin>>g[i][j];
      	    }
        }
        
        int s;
        cin>>s;
        
        dijkstra(g, s, V);
        cout<<endl;
       }
        return 0;
}// } Driver Code Ends

void dijkstra(vector<vector<int>> graph, int s, int v)
{
    set<pair<int,int>> st;
    int distance[v];
    int found[v] = {0};

    for(int j=0;j<v;j++)
    {
        distance[j] = INT_MAX;
    }

    distance[s] = 0;
    st.insert({0,s});

    while(!st.empty())
    {
        auto i = *(st.begin());
        int node = i.second;
        found[node] = 1;
        st.erase(st.begin());

        for(int j=0;j<v;j++)
        {
            if(graph[node][j] != 0 && found[j] == 0)
            {
                int new_wei = i.first+graph[node][j];
                if(distance[j]>new_wei)
                {
                    if(st.find({distance[j],j}) != st.end())
                    {
                        st.erase({distance[j],j});
                    }
                    st.insert({new_wei,j});
                    distance[j] = new_wei;
                }
            } 
        }
        
    }

    for(int j=0;j<v;j++)
    {
        cout<<distance[j]<<" ";
    }
}