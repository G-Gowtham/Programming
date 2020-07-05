#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    int n,r;
    cin>>n>>r;
    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    
    r = r%n;
    while(r)
    {
        int tmp[n];
        for(int i = 0;i<n;i++)
            tmp[i] = a[i][0];
        
        for(int i=0;i<n;i++)
            for(int j=1;j<n;j++)
                a[i][j-1] = a[i][j];
        
        for(int i=0;i<n;i++)
            a[i][n-1] = tmp[i];
        
        r--;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<"\n";
    }
}

int main()
{
    fn();
    return 0;
}
