#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int arr[], int n, int x)
{
	sort(arr,arr+n);

	for(int i=1;i<n-1;i++)
	{
		int left = 0, right = n-1, sumi = 0;

		while(left<i && right>i)
		{
			sumi = arr[left]+arr[right]+arr[i];

			if(sumi == x)
				return 1;
			
			if(sumi<x)
				left += 1;
			else
				right -= 1;
			
			
		}
	}

	return 0;
}


int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}