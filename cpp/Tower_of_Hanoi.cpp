#include<bits/stdc++.h>
using namespace std;

void toh(int n,int source,int dest,int aux,int &step)
{
    if(n==0)
        return;
    
    toh(n-1,source,aux,dest,step);
    step += 1;
    cout<<"move disk "<< n << " from rod "<< source <<" to rod "<<dest<<"\n";
    toh(n-1,aux,dest,source,step);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int step=0;
        toh(n,1,3,2,step);
        cout<<step<<endl;
        
    }

    return 0;
}