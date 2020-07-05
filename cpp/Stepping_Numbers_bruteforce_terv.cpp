#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  
  for(int i=n;i<m+1;i++)
  {
    	if(i<10)
        {
          cout<<i<<" ";
          continue;
        }
    
  		string s = to_string(i);
    	int flag = 0;
    	for(int j=1;j<s.size();j++)
        {
          if(abs((s[j-1]-'0') - (s[j]-'0')) != 1)
          {
            //cout<<"hi";
            flag = 1;
            break;
          }
        }
    
    if(flag == 0)
    {
      cout<<s<<" ";
    }
  }
  
  return 0;
}