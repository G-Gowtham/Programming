#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int count;
  
  if(n&1)
  {
    count = pow(9,(n-1)/2);
  }
  else
  {
    count = pow(9,(n-2)/2);
  }
  
  cout<<count<<"\n";
  
  return 0;
}