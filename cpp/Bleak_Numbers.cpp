#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int n,flag = 1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int count = 0,tmp=i;
        while(tmp)
        {
            if(tmp&1)
                count += 1;
            tmp>>=1;

        }

        if(i+count == n)
        {
            flag = 0;
            //cout<<i<<" "<<count<<" ";
            break;
        }
    }
     cout<<flag<<"\n";
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
