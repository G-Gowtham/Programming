// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	
	int bin_search(int *arr,int i,int j,int n)
    {
        if(i==j)
            return arr[i];

        int mid = i+((j-i)/2);

        if((mid-1< 0 || arr[mid-1]<arr[mid]) && (mid+1>n-1 || arr[mid+1]<arr[mid]))
            return arr[mid];
        
        if((mid-1< 0 || arr[mid-1]<arr[mid]) && (mid+1>n-1 || arr[mid+1]>arr[mid]))
            return bin_search(arr,mid+1,j,n);

        else
            return bin_search(arr,i,mid-1,n);
    }
	
	int findMaximum(int arr[], int n) {
        
        return bin_search(arr,0,n-1,n);
        
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends