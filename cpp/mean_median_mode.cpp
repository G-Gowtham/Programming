
#include <bits/stdc++.h> 
using namespace std; 

double findMean(int a[], int n) 
{ 
	int sum = 0; 
	for (int i = 0; i < n; i++) 
		sum += a[i]; 
	
	return (double)sum/(double)n; 
} 

double findMedian(int a[], int n) 
{ 

	sort(a, a+n); 
 
	if (n % 2 != 0) 
	return (double)a[n/2]; 
	
	return (double)(a[(n-1)/2] + a[n/2])/2.0; 
} 

int findMode(int a[], int n) 
{ 
    int b[n]; 

    int max = *max_element(a, a + n); 
  
    int t = max + 1; 
    int count[t]; 
    for (int i = 0; i < t; i++) 
        count[i] = 0; 

    for (int i = 0; i < n; i++) 
        count[a[i]]++; 

    int mode = 0; 
    int k = count[0]; 
    for (int i = 1; i < t; i++) { 
        if (count[i] > k) { 
            k = count[i]; 
            mode = i; 
        } 
    } 
  
    return mode;
} 

int main() 
{ 
	
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

	cout<<findMean(a, n)<<" "<< findMedian(a, n) <<" "<< findMode(a, n) << endl;
	return 0; 
} 
