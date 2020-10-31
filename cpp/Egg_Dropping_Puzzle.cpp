#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    int eggs,floors;
	cin>>eggs>>floors;

	int dp[eggs+1][floors+1];

	for(int i=0;i<eggs+1;i++)
		dp[i][0] = 0;
	
	for(int i=0;i<floors+1;i++)
		dp[0][i] = 0;
	
	for(int i=1;i<eggs+1;i++)
		dp[i][1] = 1;
	
	for(int i=1;i<floors+1;i++)
		dp[1][i] = i;
	
	


	for(int e=2;e<eggs+1;e++)
	{
		for(int f=2;f<floors+1;f++)
		{
			dp[e][f] = INT_MAX;

			for(int k=1;k<f;k++)
			{
				dp[e][f] = min((max(dp[e-1][k-1],dp[e][f-k])+1),dp[e][f]);
			}
		}
	}

	cout<<dp[eggs][floors]<<"\n";

}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
