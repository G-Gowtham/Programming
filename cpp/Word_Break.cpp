#include <bits/stdc++.h>
using namespace std;

int find()
{
    map<string,int> m;
    int k,i,n;
    string s;

    cin>>k;

    for(i=0;i<k;i++)
    {
        string x;
        cin>>x;
        m[x] = i;
    }

    // m[""] = 1;

    cin>>s;
    n = s.size();
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[0] = 1;
    for(i=1;i<n+1;i++)
    {
        //cout<<i<<"\n";

        for(int j=0;j<i;j++)
        {
            //cout<<s.substr(j,i-j)<<"\n";
            if(dp[j] && m.find(s.substr(j,i-j)) != m.end())
            {
                dp[i] = 1;
                break;
            }
        }

    }

    // for(int i=0;i<n+1;i++)
    // {
    //     cout<<dp[i]<<" ";
    // }
    return dp[n];
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        
        cout<<find()<<"\n";
    }
	return 0;
}