#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int i,j,flag = 0,n;
    cin >> n ;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    unordered_map<int,int> umap;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(umap.find((a[i]+a[j])) != umap.end())
            {
                flag = 1;
                break;
            }
            umap[(a[i]+a[j])]+=1;
            
        }
    }

    if(flag == 1)
        cout<<"1\n";
    else
        cout<<"0\n";
    
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        fn();
    }
    return 0;
}