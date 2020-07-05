#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n;
  int boys[n];
  
  for(int i=0;i<n;i++)
    cin>>boys[i];
  
  cin>>m;
  
  int girls[m];
  
  for(int i=0;i<m;i++)
    cin>>girls[i];
  
  sort(boys,boys+n);
  sort(girls,girls+m);
  
  int count = 0;
  
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
      if(girls[j] == -1)
        continue;
      
      int x = boys[i] - girls[j];
      if(x == 0 || x == 1 || x == -1)
      {
        count += 1;
        boys[i] = -1;
        girls[j] = -1;
        break;
      }
    }
  } 
  cout<<count;
  
  return 0;
}