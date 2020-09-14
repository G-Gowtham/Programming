#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[] = {2,3,5,7,11,13,17,19};
    int count = 0,i=0;

    while(n!=1)
    {
        if(n%a[i] == 0)
            count += 1;

        while(n%a[i] == 0)
            n/=a[i];
        
        i+=1;
    }
    cout<<(1<<count)-1;
}

int main()
{
    fn();
    return 0;
}
