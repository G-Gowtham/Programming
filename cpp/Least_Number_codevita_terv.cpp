#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);

    int i=0,j=1;
    
    for(i=0;i<n;i++)
    {
        if(a[i]>j)
            break;
        else
            j += a[i];
    }

    cout<<j<<endl;
}

int main()
{
    // int t;
    // cin>>t;

    // while(t--)
        fn();

    return 0;
}