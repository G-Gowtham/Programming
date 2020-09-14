#include <bits/stdc++.h>
using namespace std;

void find_post(int *a,int start,int end)
{


    if(start > end)
    {
        return;
    }

    int index = start+1;
    for(int i=start+1;i<=end;i++)
    {
        if(a[start] < a[i])
        {
            index = i;
            break;
        }
    }
    //cout<<index<<"\n";


    find_post(a,start+1,index-1);
    find_post(a,index,end);
    cout<<a[start]<<" ";

}

void fn()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    find_post(a,0,n-1);
    cout<<"\n";
}

int main() 
{
    int t;
    cin>>t;

    while(t--)
	    fn();

	return 0;
}