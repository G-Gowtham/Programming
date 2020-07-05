#include<bits/stdc++.h>
using namespace std;

void permuatate(int *a,int i,int n,int k,int sumi,int &count)
{
      if(sumi==k)
      {
        count += 1;
        return;
      }
      if(sumi > k)
         return;
  
      for(int j=i;j<n;j++)
      {
        permuatate(a,j,n,k,sumi+a[j],count);
      }
  
      return;
}
int main()
{
      int n,k;
      cin>>n;
      int a[n];
      int count = 0;
      for(int i=0;i<n;i++)
                cin>>a[i];
      
      cin>>k;
  
      sort(a,a+n);
  
      //for(int i=0;i<n;i++)
    permuatate(a,0,n,k,0,count);
  	cout<<count; 
      return 0;
}