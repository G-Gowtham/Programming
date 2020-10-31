// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


//User function template for C++
class Solution{
public:
	// returns required number of subarrays
	int numOfsubarrays(int arr[], int n) {
	    
        int count = n, sumi = 0, pro = 1;
        for(int i=0;i<n;i++)
        {
            sumi = arr[i];
            pro = arr[i];
            for(int j=i+1;j<n;j++)
            {
                sumi += arr[j];
                pro *= arr[j];

                if(sumi == pro)
                    count +=1;
            }
            
        }

        return count;
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
        auto ans = ob.numOfsubarrays(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends