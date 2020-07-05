#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int r,c,i,j,r_start,c_end,r_end,c_start;
    cin>>r>>c;
    int mat[r][c];
    
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin>>mat[i][j];

        r_start = 0;
        r_end = r;
        c_start = 0;
        c_end = c;

        while(r_start<r_end  && c_start<c_end)
        {
                for(i=c_start;i<c_end;i++)
                        cout<<mat[r_start][i]<<" ";
                r_start += 1;

                for(i=r_start;i<r_end;i++)
                    cout<<mat[i][c_end-1]<<" ";

                c_end -= 1;

                if(r_start != r_end)
                    for(i=c_end-1;i>=c_start;i--)
                        cout<<mat[r_end-1][i]<<" ";

                r_end -= 1;

                if(c_start != c_end)
                    for(i =r_end-1;i>=r_start;i--)
                        cout<<mat[i][c_start]<<" ";
                c_start += 1;
    } 
    cout<<"\n";      
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        fn();
    }
    return 0;
}