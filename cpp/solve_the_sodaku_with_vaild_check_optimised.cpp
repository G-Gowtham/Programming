// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  

bool SolveSudoku(int grid[N][N]);

void printGrid(int grid[N][N]);

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		
		if (SolveSudoku(grid) == true)  
            printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}// } Driver Code Ends


int flag = 0;
void solve_sodaku(int n, int board[N][N], int fixed_ele[N][N], int row[N][N+1], int col[N][N+1], int square[N][N+1],int x,int y)
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

bool fn(int board[N][N])
{
    int n = 9;
    int fixed_ele[N][N],row[N][N+1],col[N][N+1],square[N][N+1];
    
    memset(fixed_ele,0,sizeof(fixed_ele));
    memset(row,0,sizeof(row));
    memset(col,0,sizeof(col));
    memset(square,0,sizeof(square));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(board[i][j] != 0)
            {
                fixed_ele[i][j] = 1;
                row[i][board[i][j]] += 1;
                col[j][board[i][j]] += 1;
                square[((i/3)*3)+(j/3)][board[i][j]] += 1;
            }
            
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(row[i][j] > 1 || col[i][j] > 1 || square[i][j] > 1)
            {
                return 0;
            }
        }
    }
    
    solve_sodaku(n,board,fixed_ele,row,col,square,0,0);
    return 1;

}

bool SolveSudoku(int board[N][N])  
{ 
    flag = 0;
    int n = 9;
    
    if(fn(board))
        return 1;
    
    return 0;
}

void printGrid (int board[N][N]) 
{
    int n=9;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<board[i][j]<<" ";
        }
    }

}
