// { Driver Code Starts
 #include <bits/stdc++.h>
using namespace std;

int atoi(string str);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<atoi(s)<<endl;
	}
}// } Driver Code Ends


/*You are required to complete this method */
int atoi(string str)
{
    int i = 0;
    if(str[0]== '-')
        i = 1;
        
    for(;i<str.size();i++)
    {
        if(int(str[i])<48 || int(str[i])>57)
        {
            return -1;
        }
    }
    
    return stoi(str);
}