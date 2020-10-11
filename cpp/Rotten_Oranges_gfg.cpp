#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

int fn()
{
    int n,m;
    cin>>n>>m;

    int a[n][m],fresh=0,time=0;
    queue<pair<int,int>> q;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] == 1)
                fresh += 1;
            else if(a[i][j] == 2)
                q.push({i,j});
        }
    }

    q.push({-1,-1});

    while(q.size()>1)
    {
        if(fresh == 0)
            break;

        //cout<<time<<" "<<fresh<<"\n";

        while(q.front().first != -1 )
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            //top
            if(x-1>=0 && a[x-1][y] == 1)
            {
                fresh -= 1;
                q.push({x-1,y});
                a[x-1][y] = 2;
            }
            //bottom
            if(x+1<n && a[x+1][y] == 1)
            {
                fresh -= 1;
                q.push({x+1,y});
                a[x+1][y] = 2;
            }
            //left
            if(y-1>=0 && a[x][y-1] == 1)
            {
                fresh -= 1;
                q.push({x,y-1});
                a[x][y-1] = 2;
            }
            if(y+1<m && a[x][y+1] == 1)
            {
                fresh -= 1;
                q.push({x,y+1});
                a[x][y+1] = 2;
            }
    }

    q.push(q.front());
    q.pop();

        time += 1;
    }

    if(fresh == 0)
        return time;
    else
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
