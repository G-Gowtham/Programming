#include<bits/stdc++.h>
using namespace std;
#define INF 10000000

int fn()
{
    int n,i,j,k;
    cin>>n;
    int dp[n][n];
    string s;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>s;
            if(s == "INF")
            {
                dp[i][j] = INF;
            }
            else
            {
                dp[i][j] = stoi(s);
            }
        }
            
    }


    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i == k or j == k)
                    continue;
                if(dp[k][j] == INF or dp[i][k] == INF)
                    continue;
                if(i == j)
                    continue;
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]); 
            }
        }
    }
  
  for(i=0;i<n;i++)
  {
        for(j=0;j<n;j++)
        {
            if(dp[i][j] == INF)
                cout<<"INF"<<" ";
            else
                cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
  }

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