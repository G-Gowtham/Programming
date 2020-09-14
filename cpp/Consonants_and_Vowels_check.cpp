// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void checkString(string s);


 // } Driver Code Ends
//User function Template for C++

void checkString(string s)
{
    int v=0;
    int c=0;
    int n = s.length();
	int vowel = 0;
    char a[] = {'a','e','i','o','u'};
    for(int i =0;i<n;i++)
    {
        if(s[i] == ' ')
            continue;
        vowel = 0;
        for(int j = 0; j < 5;j++)
        {
            if(s[i] == a[j])
            {
                vowel = 1;
                v += 1;
                break;
            }
        }
        if(vowel == 0)
            c += 1;
    }
    //cout<<n<<" "<<v<<" "<<c<<" ";
    if(v>c)
    cout<<"Yes";
    else if(c>v)
    cout<<"No";
    else
    cout<<"Same";
    
    cout<<endl;
}

// { Driver Code Starts.



int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
	    
	    string s;
	    getline(cin,s);
	    checkString(s);
	   
	}
	return 0;
}

  // } Driver Code Ends