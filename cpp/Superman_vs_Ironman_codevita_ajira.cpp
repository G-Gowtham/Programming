#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1)
        return 1;

    return n*fact(n-1);
}

void fn()
{
    int n;
    cin>>n;
    string s="";

    while(n)
    {
        int i = 1;
        while(fact(i)<=n)
            i+= 1;
        
        n -= fact(i-1);
        s = to_string(i-1) + s;
    }

    cout<<s;
}

int main()
{

    fn();

    return 0;
}