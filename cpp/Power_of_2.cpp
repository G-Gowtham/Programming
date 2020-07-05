#include <bits/stdc++.h>
using namespace std;

string fn()
{
    long long n;
    int count=0;
    cin>>n;
    //cout<<n;
    while(n && count<2)
    {
        if(n & 1)
        {
            count += 1;      
        }
        n = n>>1;
    }

    if(count == 1)
    {
        return "YES";
    }
    else
    {
        return "NO";
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