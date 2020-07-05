#include <bits/stdc++.h>
using namespace std;

bool fn()
{
    int num;
    cin>>num;
    int a=1,b=1,c = -2*num;
    long long n1 = ((-b)+(sqrt(1-(4*c))))/(2);
    long long n2 = ((-b)-(sqrt(1-(4*c))))/(2);

    if((n1*(n1+1))/2 == num)
    {
        return 1;
    }
    if((n2*(n2+1))/2 == num)
    {
        return 1;
    }
    return 0;
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