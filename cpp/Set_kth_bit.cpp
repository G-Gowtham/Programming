#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n,k;
    cin>>n>>k;
    int x = 1<<k;
    cout<<(n|x)<<"\n";
}
int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        fn();
    }
	return 0;
}