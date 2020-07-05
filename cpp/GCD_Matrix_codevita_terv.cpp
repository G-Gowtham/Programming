#include <bits/stdc++.h>
using namespace std;

int find_gcd(int a,int b)
{
    int i = min(a,b);

    while(i>0)
    {
        if(a%i == 0 && b%i == 0)
            return i;
        i -= 1;
    }
}

void fn()
{
    int n,gcd = 1;
    cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == j || i+j == n-1)
                gcd = find_gcd(gcd,a[i][j]);

        }
    }

    cout<<gcd;
}

int main()
{

    fn();

    return 0;
}