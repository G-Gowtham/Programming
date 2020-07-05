// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void fn()
{   int n,i,j,k;
    cin>>n;
    int a[n][n];

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        k = n-1;
        for(j=0;j<n/2;j++)
        {
            a[i][j] = a[i][j] + a[i][k];
            a[i][k] = a[i][j] - a[i][k];
            a[i][j] = a[i][j] - a[i][k]; 
            k -= 1; 
        }
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
    cout<<"\n";
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        fn();
    }
    return 0;
}