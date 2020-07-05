#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int n;
    cin>>n;
    int a[n],left_to_right[n],right_to_left[n],bitonic[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    
    for(int i=0;i<n;i++)
    {
        left_to_right[i] = 1;
        right_to_left[i] = 1;
        bitonic[i] = 0;
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                left_to_right[i] = max(left_to_right[i],left_to_right[j]+1);
            }
        }
    }

    for(int i=n-2;i>-1;i--)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[i])
            {
                right_to_left[i] = max(right_to_left[i],right_to_left[j]+1);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        bitonic[i] = left_to_right[i]+right_to_left[i]-1;
    }


    // for(int i=0;i<n;i++)
    //     cout<<right_to_left[i];

    return *max_element(bitonic,bitonic+n);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<fn()<<"\n";
    }
    return 0;
}
