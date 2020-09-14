// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


int main()
{
     int t;
    cin>>t;
    while(t--)
    {
   string str;
   cin>>str;
   int n=str.size();
   string a,b;
   set<string> s;
   string c = "",right = "",left = "";
   int l,r; 
   for(int i=0;i<n;i++)
   {
       
       c = str[i];
       r = i+1;
       l = i-1;
        right = "";
        left = "";
        s.insert(c);

       while(l>=0 and r<n)
       {
           if(str[l]==str[r])
           {
               left = str[l]+left;
               right = right+str[r];
               //cout<<left + c +right<<"\n";
               string ans =  left + c +right;
               s.insert(ans);
               r += 1;
               l -= 1;
           }
           else
                break;
       }
    }

    for(int i=1;i<n;i++)
  {
      if(str[i-1] == str[i])
      {
            c = str[i-1]+str[i];
            r = i+1;
            l = i-2;
            right = "";
            left = "";
            s.insert(c);
                
            while(l>=0 and r<n)
            {
                if(str[l]==str[r])
                {
                    left = str[l]+left;
                    right = right+str[r];
                    //cout<<left + c +right<<"\n";
                    string ans =  left + c +right;
                    s.insert(ans);
                    r += 1;
                    l -= 1;
                }
                else
                        break;
            }
      }
    }

       int count = 0;

       for(auto i:s)
       {    
           //cout<<i<<" ";
            count += 1;
       }
        cout<<count<<"\n";

   }
    return 0;
}