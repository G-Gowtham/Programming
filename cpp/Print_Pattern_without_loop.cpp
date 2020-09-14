#include<bits/stdc++.h>
using namespace std;

void pat(int i,int n,int flag)
{
    if(i==n)
    {
        cout<<i<<"\n";
        return;
    }
    else if(flag==1)
    {
        cout<<i<<" ";
        pat(i+5,n,flag);
    }
    else if(i<=0)
    {
        flag = 1;
        cout<<i<<" ";
        pat(i+5,n,flag);
    }
    else
    {
        cout<<i<<" ";
        pat(i-5,n,flag);
    }


}

int main()
{
    int n,i,j,t;
    cin>>t;

    while(t--)
    {
    cin>>n;
    cout<<n<<" ";
    pat(n-5,n,0);
    }
    return 0;
}