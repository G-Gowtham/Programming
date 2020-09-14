#include<bits/stdc++.h>
using namespace std;

int dp[50][50];

int find(string s,int i,int j)
{
    if(i>=j)
        return 0;
    
    if(dp[i][j] != -1)
        return dp[i][j];

    if(s[i] == s[j])
        dp[i][j] = find(s,i+1,j-1);
    else
        dp[i][j] = 1+min(find(s,i,j-1),find(s,i+1,j));
    
    return dp[i][j];
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        memset(dp,-1,sizeof(dp));
        cout<<find(s,0,s.size()-1)<<"\n";

        // for(int i = 0;i<s.size();i++)
        // {
        //     for(int j = 0;j<s.size();j++)
        //     cout<<dp[i][j]<<" ";
        //     cout<<"\n";
        // }

    }
    return 0;
}