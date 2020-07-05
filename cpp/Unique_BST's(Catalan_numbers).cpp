#include <bits/stdc++.h>
using namespace std;
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int; 

cpp_int fact[201];
int main() {
    fact[0] = 1;
	for(int i=1;i<201;i++)
        fact[i] = fact[i-1]*i;
    

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cpp_int l = fact[(2*n)]/(fact[n]*fact[n+1]);
        cout<<l<<"\n";
    }

	return 0;
}