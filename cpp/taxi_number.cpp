#include<bits/stdc++.h>
using namespace std;

void fn(int n)
{
  long long int i=1, count =0;
  while(count<n)
  {
    int c = 0;
    
    for(int j=1;j<=pow(i,1/3);j++)
    {
      for(int k=j+1;k<=pow(i,1/3);k++)
      {
        if(j*j*j + k*k*k == i)
          c++;
      }
   }
      if(c==2)
      {
        count++;
        if(count == n)
          cout<<i<<"\n";
      }
    i++;
  }
}
int main()
{
  int n;
  cin>>n;
  fn(n);
  return 0;
}