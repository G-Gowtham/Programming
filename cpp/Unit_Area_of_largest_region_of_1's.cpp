// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

#define SIZE 100


int x[8] = {-1,-1,0,1,1,1,0,-1};
int y[8] = {0,1,1,1,0,-1,-1,-1};

bool isvalid(int i,int j,int n,int m)
{
    return (i>=0 && j>=0 && i<n && j<m);
}

void neibhours(int i,int j,int n,int m,int a[SIZE][SIZE],int &count)
{
    a[i][j] = 0;
    count += 1;
    for(int p=0;p<8;p++)
    {
        if(isvalid(i+x[p],j+y[p],n,m) && a[i+x[p]][j+y[p]] == 1)
        {
            neibhours(i+x[p],j+y[p],n,m,a,count);
            //cout<<count;

        }
    }
}

int findMaxArea(int n, int m, int a[SIZE][SIZE] )
{
    int maxi = 0;

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] == 1)
            {
                int count = 0;
                neibhours(i,j,n,m,a,count);
                maxi = max(maxi,count);
            }
        }
    }

    return maxi;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int g[SIZE][SIZE];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];

        cout << findMaxArea(n, m, g) << endl;
    }

    return 0;
}  // } Driver Code Ends