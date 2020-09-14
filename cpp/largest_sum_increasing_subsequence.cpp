#include<bits/stdc++.h>
using namespace std;

//1 101 2 3 100 4 5

void fn()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for(int i =0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for(int i =1;i < n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j] < a[i])
            {
                if(b[j]+a[i] > b[i])
                {
                    b[i] = b[j] + a[i];
                }
            }
        }
    }
    cout<<*max_element(b,b+n)<<"\n";
    
}

int main()
{
 int t;
 cin >>t;
 while(t--)
 {
 fn();
}
return 0;
}