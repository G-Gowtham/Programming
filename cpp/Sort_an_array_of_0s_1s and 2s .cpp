// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

// } Driver Code Ends


void sort012(int a[], int n)
{
    int l=0,r=n-1,m=0;

    while (m<=r)
    {
        if(a[m] == 0)
        {
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(a[m] == 1)
        {
            m++;
        }
        else
        {
            swap(a[m],a[r]);
            r--;
        }
        
    }
    
}