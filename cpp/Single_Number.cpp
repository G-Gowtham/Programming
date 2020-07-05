#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k=0;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   
	   for(int i=0;i<n;i++)
	        k = k^a[i];
	  
	  cout<<k<<"\n";
	    
	    
	}
	
	return 0;
}

1 2 3 4  5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 
26 27 28 29 30

3 4 4 5