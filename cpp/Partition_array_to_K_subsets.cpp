// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


bool isKPartitionPossible(int [], int , int );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int k;
    	cin>>k;
    	cout<<isKPartitionPossible(a, n, k)<<endl;
    }
}

bool partition(int a[],vector<int> &v,int end,int bucket_sum)
{
        if(end<0)
                return 1;
        
        for(int i=0;i<v.size();i++)
        {
                if(v[i]+a[end] <= bucket_sum)
                {
                        v[i] += a[end];
                        if(partition(a,v,end-1,bucket_sum))
                                return 1;
                        v[i] -= a[end];
                }

                // if(v[i] == 0)
                //         break;
        }
        return 0;
        
}

bool isKPartitionPossible(int a[], int n, int k)
{
        int sumi = 0,bucket_sum = 0,end = n-1;
     for(int i=0;i<n;i++)
     {
             sumi += a[i];
     }

     if(sumi%k != 0)
        return 0;

        bucket_sum = sumi/k;
        sort(a,a+n);
        
        if(a[n-1]>bucket_sum)
                return 0;
        
        while(a[end] == bucket_sum)
        {
                end -= 1;
                k -= 1;
        }

        int visited[end] = {0};
        vector<int> v;

        for(int i=0;i<k;i++)
                v.push_back(0);
        
        return partition(a,v,end,bucket_sum);
}