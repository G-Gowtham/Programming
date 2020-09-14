// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int bin_search(int A[],int left,int right,int k);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int key;
        cin>>key;
        int found = bin_search(a,0,N-1,key);
        cout<<found<<endl;
    }
}
// } Driver Code Ends


/*You need to complete this function */
int bin_search(int a[], int start, int end, int k)
{
    if(start>end)
        return -1;

    int mid = (start+end)/2;

    if(a[mid] == k)
        return mid;
    else if(a[mid]<k)
        return bin_search(a,mid+1,end,k);
    else
        return bin_search(a,start,mid-1,k); 
}