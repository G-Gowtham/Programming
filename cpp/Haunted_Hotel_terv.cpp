#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int n,x;
    cin>>n>>x;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int c_rooms = 0,rem = 0;
    string ans = "";

    for(int i=0;i<n;i++)
    {
        c_rooms = 0;
        if(rem != 0)
        {
            a[i] = a[i] - (x - rem);
            c_rooms = 1;
        }

        c_rooms += (a[i]/x);
        rem = a[i]%x;
        ans += to_string(c_rooms%10);
    }
    cout<<ans<<"\n";
}

int main()
{
    fn();
    return 0;
}