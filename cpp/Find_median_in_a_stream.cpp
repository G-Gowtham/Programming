#include <bits/stdc++.h>
using namespace std;

void fn()
{
    priority_queue<int> maxq;
    priority_queue<int,vector<int>,greater<int>> minq;
    int n,num,median=0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>num;
        if(median<num)
        {
            if(minq.size() == maxq.size() || minq.size()<maxq.size())
            {
                minq.push(num);
            }
            else
            {
                
                maxq.push(minq.top());
                minq.pop();
                minq.push(num);
            }
        }
        else
        {
            if(minq.size()==maxq.size() || minq.size()>maxq.size())
            {
                maxq.push(num);
            }
            else
            {
                minq.push(maxq.top());
                maxq.pop();
                maxq.push(num);
            }
        }


        if(minq.size()>maxq.size())
        {
            median = minq.top();
            cout<<median<<"\n";
        }
        else if(maxq.size()>minq.size())
        {
            median = maxq.top();
            cout<<median<<"\n";
        }
        else
        {
            median = (minq.top()+maxq.top())/2;
            cout<<median<<"\n";
        }

    }
}

int main() 
{  
    fn();
    return 0;
}