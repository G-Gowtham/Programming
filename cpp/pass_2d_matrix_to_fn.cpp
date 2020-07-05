#include<bits/stdc++.h>
using namespace std;

const int n=2;
void fn(int x,int a[n][n],int **mat)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cout<<a[i][j];
}

int main()
{

    int a[n][n] = {{1,2},{1,2}},b[n][n] = {{1,2},{1,2}};
    int **mat;
    mat = new int*[n];
    	for(int i = 0;i<n;i++)
        {
    	    mat[i] = new int[n];
    	}

 	fn(n,a,mat);
  return 0;
}