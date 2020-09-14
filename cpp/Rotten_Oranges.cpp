#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int r,c,i,j;
    cin >> r >> c;
    int a[r][c],one = 0,count =0;
    queue<pair<int,int>> q;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
            if(a[i][j] == 1)
                one+=1;
            if(a[i][j] == 2)
                q.push({i,j});
        }
    } 

    while(!q.empty())
    {

        if(one <= 0)
        {
            //cout<<"hi";
            break;
        }

        q.push({-1,-1});

        count += 1;
        while(true)
        {
            
            pair<int,int> tmp = q.front();
            q.pop();
            int x = tmp.first, y =tmp.second;

            if(x == -1)
                break;

            //left
            if(y>0 and a[x][y-1] == 1)
            {
                a[x][y-1] = 2;
                one-=1;
                q.push({x,y-1});
            }
            //right
            if(y<c-1 and a[x][y+1] == 1)
            {
                a[x][y+1] = 2;
                one-=1;
                q.push({x,y+1});
            }
            //top
            if(x>0 and a[x-1][y] == 1)
            {
                a[x-1][y] = 2;
                one-=1;
                q.push({x-1,y});
            }
            //down
            if(x<r-1 and a[x+1][y] == 1)
            {
                a[x+1][y] = 2;
                one-=1;
                q.push({x+1,y});
            }

        }
    }

    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    } */

    if(one <= 0)
        cout<<count<<"\n";
    else
        cout<<"-1\n";
    
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fn();
    }
    return 0;
}