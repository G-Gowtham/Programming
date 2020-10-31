// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


// Function to find the transition point
int bin_search(int *arr,int i,int j,int n)
{
    //cout<<i<<j<<" ";
    if(i>j)
        return -1;
    
    int mid = i + (j-i)/2;

    if(arr[mid] == 1 && (mid-1<0 || arr[mid-1] == 0))
        return mid;
    
    if(arr[mid] == 0)
        return bin_search(arr,mid+1,j,n);
    else
        return bin_search(arr,i,mid-1,n);
}

int transitionPoint(int arr[], int n) {

    return bin_search(arr,0,n-1,n);
    
}