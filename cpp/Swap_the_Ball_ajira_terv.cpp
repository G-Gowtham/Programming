#include<bits/stdc++.h>
using namespace std;
#define MAX 30

int ans = 0;

void swap_row(char a[][MAX],int n,int i,int j)
{
    char tmp[n];

    for(int k=0;k<n;k++)
        tmp[k] = a[i][k];
    
    for(int k=0;k<n;k++)
        a[i][k] = a[j][k];
    
    for(int k=0;k<n;k++)
        a[j][k] = tmp[k];
}

void swap_next(char a[MAX][MAX],int n,int j,int i)
{
    if(a[j+1][i] == 'G')
    {
        ans += 1;
        swap_row(a,n,j,j+1);
        return;
    }
    swap_next(a,n,j+1,i);
    ans += 1;
    swap_row(a,n,j,j+1);
}

int fn()
{
    int n;
    cin>>n;
    char a[MAX][MAX];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }   

    int r_count = 0;

    for(int i=1;i<n;i++)
    {
        r_count = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j][i] == 'R')
                r_count += 1;
        }

        if(r_count > n-i)
            return -1;
    }

    int mini = 0;

    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j][i] == 'R')
            {
                if(a[j+1][i] == 'G')
                {
                    swap_row(a,n,j,j+1);
                    ans += 1;
                }
                else
                {
                    swap_next(a,n,j+1,i);
                    swap_row(a,n,j,j+1);
                    ans += 1;
                }
                
            }
        }
    }

    return ans;
}
int main()
{
  cout<<fn()<<"\n";
  return 0;
}