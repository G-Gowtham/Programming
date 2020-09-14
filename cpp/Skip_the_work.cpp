
#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    int sumi = 0,dp[2] = {0};
    dp[0] = a[0];
    dp[1] = a[1];

    for(int i=2;i<n;i++)
    {
        dp[i%2] = a[i]+min(dp[0],dp[1]);
    } 
    
    if(n>1)
        cout<<min(dp[0],dp[1])<<"\n";
    else
        cout<<0<<"\n";
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

//sc :o(n) 
// #include <bits/stdc++.h>
// using namespace std;

// void fn()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//         cin>>a[i];
        
//     int sumi = 0,dp[n] = {0};
//     dp[0] = a[0];
//     dp[1] = a[1];

//     for(int i=2;i<n;i++)
//     {
//         dp[i] = a[i]+min(dp[i-1],dp[i-2]);
//     } 
    
//    cout<<min(dp[n-1],dp[n-2])<<"\n";
// }

// int main() 
// {
// 	int t;
// 	cin>>t;
	
// 	while(t--)
// 	{
// 	    fn();
// 	}
// 	return 0;
// }