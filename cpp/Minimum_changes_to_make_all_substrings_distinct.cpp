#include <bits/stdc++.h>
#define mod 1000000007;
typedef long long ll;
using namespace std;

void fn()
{
    string s;
	cin>>s;
	int freq[26] = {0};
	int ans = 0;

	for(int i =0;i<s.length();i++)
		freq[s[i]-'a'] += 1;
	
	for(int i=0;i<26;i++)
		if(freq[i]>1)
			ans += freq[i]-1;
	
	cout<<ans<<"\n";

}

int main()
{
    int t;
    cin>>t;

    while(t--)
        fn();
    return 0;
}
