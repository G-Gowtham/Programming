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

    int cur_ele = a[0],ele = -1,maxi = a[0];

    for(int i=1;i<n-1;i++)
    {
        if(a[i] >= cur_ele)
        {   
            if(ele == -1 && maxi <= a[i])
            {
                ele = a[i];
                cur_ele = a[i];
            }
            maxi = a[i]; 
        }
        else
        {
            ele = -1;
        }
    }

    if(ele != -1 && ele>a[n-1])
        ele = -1;

    cout<<ele;

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