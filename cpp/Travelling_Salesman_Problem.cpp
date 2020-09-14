#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int ans;

void travell(vector<vector<int>> a,int *visited,int n,int count,int cost,int source)
{
    if(n == count)
    {
        ans = min(ans,cost+a[source][0]);
        return;
    }

    for(int i=1;i<n;i++)
    {
        if(visited[i] == 0 && a[source][i] && cost+a[source][i]<ans)
        {
            visited[i] = 1;
            travell(a,visited,n,count+1,cost+a[source][i],i);
            visited[i] = 0;
        }
    }
}

void fn()
{
    int n;
    cin>>n;
    //int a[MAX][MAX];
    vector<vector<int>> a(n,vector<int>(n,0));

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    int visited[n] = {0};
    visited[0] = 1;
    ans = INT_MAX;
    travell(a,visited,n,1,0,0);
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
