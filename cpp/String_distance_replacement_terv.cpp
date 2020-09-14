#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s,ans="";
  cin>>s;
  
  ans += s[0];
  int i = 1,j = 1;
  
  while(i<s.size())
  {
    int x = (s[i-1]-96) + (s[i]-96);
    if(x>26)
    	x = x%26;
    ans = ans+char(x+96)+s[i];
    i += 1;
  }
  
  cout<<ans;
  
  return 0;
}