#include<bits/stdc++.h>
using namespace std;

map<long long int,int> m;

void combo(int *a,int *data,int start,int end,int index)
{
  int sumi = 0;
  for(int j=0;j<index;j++)
  {
    sumi += data[j];
    m[sumi] = 1;
  }
  
  for(int i=start;i<=end;i++)
  {
    data[index] = a[i];
    combo(a,data,i+1,end,index+1);
  }
}

void get_combo(int *a,int n)
{
  int data[n];
  combo(a,data,0,n-1,0);
}

void fn()
{
  int n;
  cin>>n;
  int a[n];
  
  for(int i=0;i<n;i++)
    cin>>a[i];
  
  //sort(a,a+n);
  get_combo(a,n);
  
  for(int i=0;i<n;i++)
  {
    int sumi = 0;
    for(int j=i;j<n;j++)
    {
      sumi += a[j];
      m[sumi] = 1;
    }
  }
  
  long long int i=1;
  
  while(true)
  {
    if(m.find(i) == m.end())
      break;
    i += 1;
  }
  
  cout<<i<<"\n";
}
int main()
{
  fn();
  return 0;
}