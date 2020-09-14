#include <bits/stdc++.h>
using namespace std;

int flag = 0;
void solve_sodaku(int n, vector<vector<int>> &board, vector<vector<int>> fixed_ele, vector<vector<int>> row, vector<vector<int>> col, vector<vector<int>> square,int x,int y)
{
    if(x == n)
    {
        flag = 1;
        return;
    }

    for(int i=x;i<n;i++)
    {
        int j = y;
        for(;j<n;j++)
        {
            
            if(fixed_ele[i][j] == 1)
                continue;

            
            for(int k = 1;k<=n;k++)
            {
                if(row[i][k] == 0 && col[j][k] == 0 && square[((i/3)*3)+(j/3)][k] == 0)
                {
                    board[i][j] = k;
                    row[i][k] = 1;
                    col[j][k] = 1;
                    square[((i/3)*3)+(j/3)][k] = 1;

                    if(j==n-1)
                    {
                        solve_sodaku(n,board,fixed_ele,row,col,square,i+1,0);
                    }
                    else
                    {
                        solve_sodaku(n,board,fixed_ele,row,col,square,i,j+1);
                    }

                    if(flag == 1)
                        return;
                        
                board[i][j] = 0;
                row[i][k] = 0;
                col[j][k] = 0;
                square[((i/3)*3)+(j/3)][k] = 0;
                }
            }

            if(board[i][j] == 0)
            {
                return;
            }

            if(flag == 1)
                return;
        }

        if(flag == 1)
                return;
        y = 0;
        
        if(i==n-1)
            flag = 1;
    }

    
}

void fn()
{
    int n = 9;
    vector<vector<int>> board(n,vector<int>(n,0)),fixed_ele(n,vector<int>(n,0)),row(n,vector<int>(n+1,0)),col(n,vector<int>(n+1,0)),square(n,vector<int>(n+1,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>board[i][j];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j] != 0)
            {
                fixed_ele[i][j] = 1;
                row[i][board[i][j]] = 1;
                col[j][board[i][j]] = 1;
                square[((i/3)*3)+(j/3)][board[i][j]] = 1;
            }
            
        }
    }

    solve_sodaku(n,board,fixed_ele,row,col,square,0,0);

            //cout<<"hi\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    cout<<board[i][j]<<" ";
                }
                //cout<<"\n";
            }
}

int main() 
{
	int t;
    cin>>t;

    while(t--)
    {
        flag = 0;
        fn();
        cout<<"\n";
    }

	return 0;
}