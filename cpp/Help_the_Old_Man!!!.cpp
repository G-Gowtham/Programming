#include<bits/stdc++.h>
using namespace std;

void toh(int n,int source,int dest,int aux,int &step,int k)
{
    if(n==0)
        return;
    
    toh(n-1,source,aux,dest,step,k);
    step += 1;
    if(step == k)
        cout<<source <<" "<<dest<<" \n";
    toh(n-1,aux,dest,source,step,k);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int step=0;
        toh(n,1,3,2,step,k);
        
    }

    return 0;
}