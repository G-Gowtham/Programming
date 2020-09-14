#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n,ans = 0;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    int count =1;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            ans += count * (n-i-1);
            count = 1;
        }
        else
        {
            count += 1;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cout<<fn()<<"\n";
    }
  return 0;
}
