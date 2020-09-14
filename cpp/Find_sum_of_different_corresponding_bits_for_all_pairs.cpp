#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    long long int count = 0,flag = 1;

    for(int j=0;j<32;j++)
    {
        if(flag == 0)
            break;
        
        flag = 0;
        int count_0 = 0,count_1 = 0;

        for(int i=0;i<n;i++)
        {
            if(a[i]&1)
                count_1 += 1;
            else
                count_0 += 1;
            
            a[i] = a[i]>>1;

            if(a[i]!=0)
                flag = 1;
        }

        count += count_0*count_1;
    }

    cout<<(2*count)%1000000007<<endl;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();

    return 0;
}