#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int n,x;
    cin>>n;
    int a[n+1];

    for(int i=1;i<n+1;i++)
        cin>>a[i];

    int i = 1,ans = 0;
    while(i<n)
    {
        if(a[i] == i)
        {
            i += 1;
            continue;
        }

        while(a[i] != i)
        {
            ans += 1;
            swap(a[i],a[a[i]]); 
        }
        i += 1;
    }

    cout<<ans+1<<"\n";
}

int main()
{
    fn();
    return 0;
}