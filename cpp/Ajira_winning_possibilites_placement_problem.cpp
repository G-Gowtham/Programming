#include<bits/stdc++.h>
using namespace std;

int win = 0,lose = 0,draw = 0;

void find(int req_runs,int wicks,int curr_runs,int curr_wicks,int balls)
{
    int possible[6] = {0,1,2,7,4,6};

    if(curr_runs>=req_runs)
    {
        win += 1;
        return;
    }

    if(balls>6 || curr_wicks == wicks)
    {

        if(curr_runs < req_runs-1)
            lose += 1;
        if(curr_runs == req_runs-1)
            draw += 1;
        return;
    }

    
    
    for(int i=0;i<6;i++)
    {
        if(i == 0)
            find(req_runs,wicks,curr_runs,curr_wicks+1,balls+1);
        else
            find(req_runs,wicks,curr_runs+possible[i],curr_wicks,balls+1);     
    }
    
}

void fn()
{
    int req_runs,wicks;
    cin>>req_runs>>wicks;
    find(req_runs,wicks,0,0,1);
    cout<<win<<" "<<draw<<" "<<lose;
}

int main()
{
    fn();
    return 0;
}


// 12 1	1196 174 331
// 0 0	1 0 0
// 41 3	7 15 45144
