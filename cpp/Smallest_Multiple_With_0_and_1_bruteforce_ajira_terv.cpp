#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long long int x = 1;
    
    while(1)
    {
        string s = to_string((n*x));  
        int flag = 0;
      	for(int i=0;i<s.size();i++)
        {
          if(s[i] - '0' >1)
          {
            flag = 1;
            break;
          }
        }
         
      if(flag == 0)
      {
        cout<<x<<s;
        break;
      }
        x += 1;
    }
    
    return 0;
}