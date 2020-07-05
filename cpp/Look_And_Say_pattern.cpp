
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string str="1",tmp="";
  int count=1;
  cout<<1<<'\n';

  for(int i=0;i<n-1;i++)
  {
        int len=str.length();
        count = 1;
        for(int j=0;j<len-1;j++)
        {
          if(str[j]!=str[j+1])
          {
            
            tmp+=to_string(count);
            tmp+=str[j];
            count=1;
          }
          else
            count++;
        }

    //cout<<tmp<<"tmp  \n";
    tmp += to_string(count);
    tmp += str[len-1];
    
    str = tmp;
    //cout<<tmp<<"\n";
    tmp="";

    for(int j=0;j<str.size();j++)
    {
        cout<<str[j]<<" ";
    }
    cout<<"\n";
}

  return 0;
}