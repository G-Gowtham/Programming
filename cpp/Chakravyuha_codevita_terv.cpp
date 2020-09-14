#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n,i,j,r_start,c_end,r_end,c_start;
    cin>>n;
    int mat[n][n];
    vector<int>x,y;

        r_start = 0;
        r_end = n;
        c_start = 0;
        c_end = n;
        int num = 1,count=1;
        x.push_back(0);
        y.push_back(0);
        
        while(r_start<r_end  && c_start<c_end)
        {
                for(i=c_start;i<c_end;i++)
                {
                        mat[r_start][i] = num;
                        if(num%11 == 0)
                        {
                            count += 1;
                            x.push_back(r_start);
                            y.push_back(i);
                        }
                        num += 1;
                }

                r_start += 1;

                for(i=r_start;i<r_end;i++)
                {
                    mat[i][c_end-1]=num;
                    if(num%11 == 0)
                    {
                        count += 1;
                        x.push_back(i);
                        y.push_back(c_end-1);
                    }
                    num += 1;
                }

                c_end -= 1;

                if(r_start != r_end)
                {
                    for(i=c_end-1;i>=c_start;i--)
                    {
                        mat[r_end-1][i]=num;
                        if(num%11 == 0)
                        {
                        count += 1;
                        x.push_back(r_end-1);
                        y.push_back(i);
                        }
                        num += 1;
                    }
                }
                r_end -= 1;

                if(c_start != c_end)
                {
                    for(i =r_end-1;i>=r_start;i--)
                    {
                        mat[i][c_start]=num;
                        if(num%11 == 0)
                        {
                        count += 1;
                        x.push_back(i);
                        y.push_back(c_start);
                        }
                            num += 1;
                    }
                    
                }
                c_start += 1;
    } 
    //cout<<"\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<mat[i][j]<<"\t";
        cout<<"\n";
    }
    cout<<count<<"\n";

    for(int i=0;i<x.size();i++)
        cout<<"("<<x[i]<<","<<y[i]<<")\n";    

}

int main()
{
    fn();
}