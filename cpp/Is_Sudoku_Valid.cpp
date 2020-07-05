#include <bits/stdc++.h>
using namespace std;


int fn()
{
    int n = 9;
    int board[n][n],row[n][n],col[n][n],square[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>board[i][j];
    
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    memset(square,0,sizeof(square));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j] != 0)
            {
                row[i][board[i][j]-1] += 1;
                col[j][board[i][j]-1] += 1;
                square[((i/3)*3)+(j/3)][board[i][j]-1] += 1;
            }
            
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(row[i][j] > 1 || col[i][j] > 1 || square[i][j] > 1)
            {
                return 0;
            }
        }
    }

    return 1;    
    
}

int main() 
{
	int t;
    cin>>t;

    while(t--)
    {
        cout<<fn()<<"\n";
    }

	return 0;
}