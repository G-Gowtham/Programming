// { Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int a[], int n)
{
    int rsum = 0;
    
    if(n<3)
        return -1;

    for(int i=2;i<n;i++)
    {
        rsum += a[i];
    }

    int ans = -1,lsum=a[0];

    for(int i=1;i<n-1;i++)
    {
        //cout<<lsum<<" "<<rsum<<"\n";
        if(lsum == rsum)
        {
            ans = i;
            break;
        }

        lsum += a[i];
        rsum -= a[i+1];
    }

    return ans;
}