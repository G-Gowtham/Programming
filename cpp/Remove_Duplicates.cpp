#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeDups(string s) 
	{
	    string ans;
		int freq[26] = {0};

		for(int i=0; i<s.length();i++)
		{
			if(freq[s[i]-'a'] == 0)
			{
				freq[s[i]-'a']+=1;
				ans += s[i];
			}
		}

		return ans;

	}
};



int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   		
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}