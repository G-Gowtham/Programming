#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student
{
    private:
    string first_name;
    string last_name;
    
    public:
    void set_name(string f, string l)
    {
        first_name = f;
        last_name = l;
    }
       
    friend void check_name(student k);
};

    
 // } Driver Code Ends
//User function Template for C++

void check_name(student k)
{
    int i,f=0,s=0; 

    for(i=0;i<(k.first_name.length());i++)
    {
        char c = k.first_name[i];
        f += int(c);

    }
    for(i=0;i<k.last_name.length();i++)
    {
        char c = k.last_name[i];
        s += int(c);
    }
 
    if(f!=s)
        cout<<"NOT ANAGRAM\n";
    else
        cout<<"ANAGRAM\n";
}

// { Driver Code Starts.
  
  
  
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    string f,l;
	    cin>>f>>l;
	   
	    student s1;
	    s1.set_name(f,l);
	    check_name(s1);
	    
	    
	    
	}
	return 0;
}  // } Driver Code Ends