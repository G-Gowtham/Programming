#include<bits/stdc++.h>
using namespace std;

void fn()
{
    int n,count=0;
    cin>>n;
    while(n)
    {
        if(n&1)
            count += 1;
        n>>=1;

    }
    cout<<count<<"\n";
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

/*

int method1(int number){
    int count = 0 ;
    
    while(number){
        if(number&1){
            count++;
        }
        number = number/2 ;
    }
    return count ;
}


int method2(int number){
    int count = 0 ;
    while(number){
        count = count + number&1 ;
        number>>=1 ;
    }
    return count ;
}

int method3(int number){
    int count = 0 ;
    while(number){
        count++ ;
        n&=n-1 ; 
    }
    return count ; 
}


int method4(int number)
{
    int count = 0;
    string s;
    s = bitset<31>(number).to_string();
    return count(s.begin(),s.end(),'1');
}
*/