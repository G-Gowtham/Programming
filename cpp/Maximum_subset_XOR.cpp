#include<bits/stdc++.h>
using namespace std;
 
// Number of bits to represent int
#define INT_BITS 32
int maxSubarrayXOR(int [], int n);
int main()
{

    int t,n,a[100004],k;
    scanf("%d",&t);
    while(t--)
    {
        //cin>>n;
      scanf("%d",&n);

        for(int i=0;i<n;i++)
            {
            scanf("%d",&a[i]);
            }


   
printf("%d\n",maxSubarrayXOR(a,n));
       // cout<<bin(a,0,n-1,k)<<endl;


    }
}// } Driver Code Ends


// Function to return maximum XOR subset in set[]
int maxi(int *a,int i,int n,int ans)
{
    if(i==n)
        return ans;
    
    return max((maxi(a,i+1,n,a[i]^ans)),maxi(a,i+1,n,ans));
}

int maxSubarrayXOR(int a[], int n)
{
    return maxi(a,0,n,0);
}

