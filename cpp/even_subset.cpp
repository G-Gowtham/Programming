// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// Function prototype
int countSumSubsets(int[], int);


 // } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/

int countSumSubsets(int arr[], int n){

int odd_count = 0, even_count = 0, count = 0,x,y;
for(int i=0;i<n;i++)
{
    if(arr[i]&1)
        odd_count += 1;
    else
        even_count += 1;
}

x = pow(2,even_count) - 1;
y = pow(2,odd_count-1) - 1;

count = x+y+(x*y);
return count;
}

// { Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    
	    cout << countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends