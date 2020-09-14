#include<bits/stdc++.h>
using namespace std;

#define MAX 10

void rotate(long long int a[][MAX],int n,int l,int u)
{
    long long x = a[u][l];

    int i = l,j = u;

    while(i<=n-1 && j>=0)
    {   
        long long tmp = a[i][j];
        a[i][j] = x;
        i += 1;
        j -= 1;
        x = tmp;
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    long long int a[MAX][MAX];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;i++)
        for(int j=0;j<k%(i+1);j++)
            rotate(a,n,0,i);
    
    for(int i=1;i<n;i++)
        for(int j=0;j<k%(n-i);j++)
            rotate(a,n,i,n-1);
    


    cout<<"\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        
        cout<<"\n";
    }
    return 0;
}