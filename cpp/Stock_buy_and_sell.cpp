#include <bits/stdc++.h>
using namespace std;

void fn()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];    
    }

    int i = 1,start = -1,flag = 0;

    while(i<n)
    {
       
       if(a[i-1]>=a[i])
       {
           if(start != -1)
           {
               cout<<"("<<start<<" "<<i-1<<") ";
               start = -1;
           }
       }
       else
       {
           if(start == -1)
           {
                start = i-1;
                flag = 1;
           }
       }
        i++;
    }
    if(start != -1)
    {
        cout<<"("<<start<<" "<<i-1<<")";
    }
    if(flag == 0)
    {
        cout<<"No Profit\n";
    }

}

int main() 
{
	int t;
    cin>>t;
    while(t--)
    {

        fn();
        cout<<"\n";
    }
	return 0;
}