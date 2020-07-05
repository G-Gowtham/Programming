#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  
  sort(a,a+n);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);

  return 0;
}

//622440
//2868210