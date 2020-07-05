// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Functio to find first smallest positive
// missing number in the array
int missingNumber(int a[], int n) 
{ 
    int maxi = *max_element(a,a+n);
    int c[maxi+2] = {0};
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
            c[a[i]] += 1;
        
    }
    
    for(int i=1;i<=maxi+1;i++)
    {
        if(c[i] == 0)
        {
            return i;
        }
    }
    
} 

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends