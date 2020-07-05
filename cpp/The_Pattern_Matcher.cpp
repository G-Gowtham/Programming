// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

void follPatt(string );


 // } Driver Code Ends
//User function Template for C++

void follPatt(string s)
{
    int n = s.length(),i,flag = 0,count = 0,pre_x = 1;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            if(count == 0 or pre_x == 1)
            {
                count += 1;
                pre_x = 1;
            }
            else
            {
                flag = 1;
                break;
            }   
        }
        else
        {
            pre_x = 0;
            count -= 1;
        }
    }
   
    if(flag == 1)
        cout<<"0"<<"\n";
    else if(count == 0)
        cout<<"1"<<"\n";
    else
        cout<<"0"<<"\n";
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

void follPatt(string );


 // } Driver Code Ends
//User function Template for C++

void follPatt(string s)
{
    int n = s.length(),i,flag = 0,count = 0,pre_x = 1;
    for(i=0;i<n;i++)
    {
        if(s[i]=='x')
        {
            if(count == 0 or pre_x == 1)
            {
                count += 1;
                pre_x = 1;
            }
            else
            {
                flag = 1;
                break;
            }   
        }
        else
        {
            pre_x = 0;
            count -= 1;
        }
    }
   
    if(flag == 1)
        cout<<"0"<<"\n";
    else if(count == 0)
        cout<<"1"<<"\n";
    else
        cout<<"0"<<"\n";
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;

	while(t--)
	{
	    
	    string s;
	    cin>>s;
	    follPatt(s);
	   
	}
	return 0;
}  // } Driver Code Ends