#include <bits/stdc++.h>
using namespace std;

bool fn()
{
    int n;
    cin>>n;
    long long arr1[n],arr2[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

    for(int i = 0;i<n;i++)
    {
        if(arr1[i] != arr2[i])
            return 0;
    }

    return 1;
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