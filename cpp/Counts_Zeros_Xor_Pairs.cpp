#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
		cin>>a[i];
	
	map<int,int> m;

	for(auto i:a)
	{
		m[i]+=1;
	}
	int count = 0;

	for(auto i:m)
	{
		int freq = i.second;
		if(freq>1)
		{

			count += (freq*(freq-1))/2;
		}
	}

	cout<<count<<"\n";
    return;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
