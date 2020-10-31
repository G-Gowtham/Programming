// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int findExtra(int a[], int b[], int n);
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        cout << findExtra(a, b, n) << endl;
    }
}// } Driver Code Ends


/*Complete the function below*/
int bin_search(int *a, int *b, int l, int r,int index)
{
    if(l > r)
        return index;
        
    int mid = l+(r-l+1)/2;

    if(a[mid] == b[mid])
        return bin_search(a,b,mid+1,r,index);
    
    index = mid;
    index = bin_search(a,b,l,mid-1,index);

    return index;
}

int findExtra(int a[], int b[], int n) {
    return bin_search(a,b,0,n-1,n-1);
}