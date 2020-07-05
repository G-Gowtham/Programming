#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n][n];
	int visited[n][n];
  
  memset(visited,0,sizeof(visited));
  
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    	cin>>a[i][j];
  
  //set<pair<int,int>> st;
  queue<pair<int,int>> q;
  
  q.push({0,0});

  while(!q.empty())
  {
    int i = q.front().first;
    int j = q.front().second;
    cout<<a[i][j]<<" ";
    
    if(j+1<n && visited[i][j+1] == 0)// st.find({i,j+1}) == st.end())
    {
    	q.push({i,j+1});
      //st.insert({i,j+1});
      visited[i][j+1] = 1;
    }
    
    if(i+1<n && visited[i+1][j] == 0)//st.find({i+1,j}) == st.end())
    {
      q.push({i+1,j});
      //st.insert({i+1,j});
      visited[i+1][j] = 1;
    }
     q.pop();
  }
  return 0;
}