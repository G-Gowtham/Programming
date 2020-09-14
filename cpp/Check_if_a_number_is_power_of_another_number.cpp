#include<bits/stdc++.h>
using namespace std;

int fn()
{
    int x,y;
    cin>>x>>y;

    if(x<=1)
        return 0;
    if(y==1)
        return 1;

    int i =1,z;
    while(1)
    {
        z = pow(x,i);
        if(z == y)
            return 1;
        if(z>y)
            return 0;
        i += 1;
    }

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
