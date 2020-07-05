#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n,i,j,r_start,c_end,r_end,c_start,x;
    cin>>x;
    n = 2*x-1;
    int mat[n][n];

        r_start = 0;
        r_end = n;
        c_start = 0;
        c_end = n;
        int num =x;
        
        while(r_start<r_end  && c_start<c_end)
        {
                for(i=c_start;i<c_end;i++)
                {
                        mat[r_start][i] = num;
                }

                r_start += 1;

                for(i=r_start;i<r_end;i++)
                {
                    mat[i][c_end-1]=num;
                }

                c_end -= 1;

                if(r_start != r_end)
                {
                    for(i=c_end-1;i>=c_start;i--)
                    {
                        mat[r_end-1][i]=num;
                    }
                }
                r_end -= 1;

                if(c_start != c_end)
                {
                    for(i =r_end-1;i>=r_start;i--)
                    {
                        mat[i][c_start]=num;
                    }
                    
                }
                c_start += 1;
                num -= 1;
    } 
    //cout<<"\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<mat[i][j]<<" ";
        cout<<"\n";
    }
 
}

int main()
{
    fn();
}