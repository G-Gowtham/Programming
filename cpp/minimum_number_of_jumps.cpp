
#include<bits/stdc++.h> 
using namespace std;

int min(int x, int y) { return (x < y) ? x : y; } 
  
int minJumps(int arr[], int n) 
{  
    int jumps[n]; 
    int i, j; 
    if (n == 0 || arr[0] == 0) 
        return INT_MAX; 
  
    jumps[0] = 0; 

    for (i = 1; i < n; i++) { 
        jumps[i] = INT_MAX; 
        for (j = 0; j < i; j++) { 
            if (i <= j + arr[j] && jumps[j] != INT_MAX) { 
                jumps[i] = min(jumps[i], jumps[j] + 1); 
                break; 
            } 
        } 
    } 
    return jumps[n - 1]; 
} 
int main() 
{ 
    int t;
    cin >> t;
    while(t--)
    {
	int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
	int out = minJumps(a,n);
    if(out == INT_MAX)
        cout<<"-1\n";
    else
        cout<<out<<"\n";
    }
	return 0; 
} 
