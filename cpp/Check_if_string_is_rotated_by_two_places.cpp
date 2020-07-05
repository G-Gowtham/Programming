#include <bits/stdc++.h>
using namespace std;

bool fn()
{
    string a,b;
    cin>>a>>b;
    string clock="",anti_clock="";
    int n = a.size();
    if(n>2)
    {
        //cout<<a[n-2]<<a[n-1];
        clock = a.substr(0,(n-2));
        clock.insert(0,1,a[n-1]);
        clock.insert(0,1,a[n-2]);
        anti_clock = a.substr(2,(n-2))+a[0]+a[1];

        //cout<<clock<<'\n'<<anti_clock<<'\n';
        if(clock.compare(b) == 0 || anti_clock.compare(b) == 0)
            return 1;

        return 0;
    }
    else
    {
        if(a.compare(b) == 0)
            return 1;

        return 0;
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