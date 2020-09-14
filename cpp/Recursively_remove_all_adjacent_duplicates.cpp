#include <bits/stdc++.h>
using namespace std;

void fn()
{
    string s,tmp,ans;
    cin>>s;
    int flag = 0,pre = 0;
    tmp = s;
    ans = "";

    while(1)
    {
        for(int i=0;i<tmp.size()-1;i++)
        {
            if(tmp[i] == tmp[i+1])
            {
                pre = 1;
                flag = 1;
            }
            else
            {
                if(pre == 1)
                {
                    pre = 0;
                }
                else
                {
                    ans += tmp[i];
                }
                
            }
        }
        if(pre == 0)
        {
            ans += tmp[tmp.size()-1];
        }

        if(flag == 0 || ans == "")
            break;

        
        tmp = ans;
        pre = 0;
        flag = 0;
        ans = "";
    }

    cout<<ans<<'\n';
}

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {
        fn();
    }

	return 0;
}