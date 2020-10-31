#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int fn()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	unordered_map<int,int> umap;

	for(int i=0;i<n;i++)
		umap[arr[i]]+=1;
	
	for(int i=0;i<n;i++)
		if(umap[arr[i]]>1)
			return i+1;

    return -1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        cout<<fn()<<"\n";

    return 0;
}
