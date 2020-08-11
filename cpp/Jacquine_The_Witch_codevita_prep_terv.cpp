#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n, h; 
    cin>>n>>h;
    for(long k = 1; k < n; k++)
       printf("%.3lf ", h * sqrt(1.0 * k / n));

    return 0;
}