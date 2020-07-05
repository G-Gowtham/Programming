#include <bits/stdc++.h>
using namespace std;

int fn()
{
    int n,index=-1,k;
    cin>>n>>k;
    int a[n];
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
    {
        if(a[i] == k)
        {
            index = i+1;
            break;
        }
    }
    return index;
}

int main() 
{
	int t;
    cin>>t;

    while(t--)
        cout<<fn()<<"\n";

	return 0;
}