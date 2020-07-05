
#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int ans = 0,n;
    vector<int> x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        x.push_back(tmp);
        cin>>tmp;
        y.push_back(tmp);
    }

    for(int i=0;i<n-1;i++)
    {
        ans += max(abs(x[i]-x[i+1]),abs(y[i]-y[i+1]));
    }
    
    cout<<ans;
}

int main()
{
  fn();
  return 0;
}