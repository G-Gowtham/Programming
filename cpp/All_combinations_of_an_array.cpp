// C++ program to print all combination 
// of size r in an array of size n 
#include<bits/stdc++.h> 
using namespace std; 

void combinationUtil(int arr[], int data[], int start, int end,int index) 
{ 

	
		for (int j = 0; j <index; j++) 
			cout << data[j] << " "; 
		cout << endl; 

	for (int i = start; i <= end; i++) 
	{ 
		data[index] = arr[i]; 
		combinationUtil(arr, data, i+1,end,index+1 ); 
	} 
}  

void printCombination(int arr[], int n) 
{ 

	int data[n]; 
	combinationUtil(arr, data, 0, n-1, 0); 
} 



// Driver code 
int main() 
{ 
	int arr[] = {1, 2, 3, 4, 5}; 
	int r = 3; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	printCombination(arr, n); 
} 

// This code is contributed by rathbhupendra 
