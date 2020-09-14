// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

#define MAX 5
vector<string> printPath(int m[MAX][MAX], int n);

// Position this line where user code will be pasted.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m[MAX][MAX];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }

        vector<string> result = printPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


// User function template for C++

// m is the given matrix and n is the order of matrix
// MAX is the upper limit of N ie 5
set<string> st;

void find(int a[MAX][MAX],int row,int col,int n,string s)
{
    if(row == n-1 && col == n-1)
    {
        st.insert(s);
        return;
    }

    //Up
    if(row>0 && a[row-1][col] == 1)
    {
        a[row-1][col] = 0;
        find(a,row-1,col,n,s+"U");
        a[row-1][col] = 1;
    }
    //Down
    if(row<n-1 && a[row+1][col] == 1)
    {
        a[row+1][col] = 0;
        find(a,row+1,col,n,s+"D");
        a[row+1][col] = 1;
    }
    //left
    if(col>0 && a[row][col-1] == 1)
    {
        a[row][col-1] = 0;
        find(a,row,col-1,n,s+"L");
        a[row][col-1] = 1;
    }
    //right
    if(col<n-1 && a[row][col+1] == 1)
    {
        a[row][col+1] = 0;
        find(a,row,col+1,n,s+"R");
        a[row][col+1] = 1;
    }
}

vector<string> printPath(int m[MAX][MAX], int n) 
{
    st.clear();
    vector<string> v;
    
    if(m[0][0] == 0)
        return v;
        
    m[0][0] = 0;
    find(m,0,0,n,"");
    
    for(auto i:st)
    {
        //cout<<i<<" ";
        v.push_back(i);
    }
    return v;
}