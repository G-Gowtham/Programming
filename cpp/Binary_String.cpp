#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        int n,count = 0,i,ans=0;
        string s;
        cin>>n>>s;
        int a[n];
        for(i=0;i<n;i++)
        {
            if(s[i] == '1')
                count += 1;
        }
        int tmp = count;
        while(tmp)
        {
            ans += tmp;
            tmp -= 1;
        }
        //cout<<count<<ans;
        if(ans == 0)
            cout<<"0\n";
        else
            cout<<ans-count<<"\n";
    }
	return 0;
}