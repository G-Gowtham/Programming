#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    int count = 1,maxi = a[0]; 
    for(int i=1;i<n;i++)
    {
        if(maxi<a[i])
        {
            count += 1;
            maxi = a[i];
        }
    }
    
    cout<<count<<"\n";
}

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    fn();
	}
	return 0;
}