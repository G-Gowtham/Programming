// { Driver Code Starts
// Initial Template for C++
/* script for test case http://code.geeksforgeeks.org/PetjYq */
#include <bits/stdc++.h>

using namespace std;

string printOrder(string[], int, int);
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];

        string ss = printOrder(s, n, k);
        order = "";
        for (int i = 0; i < ss.size(); i++) order += ss[i];

        string temp[n];
        std::copy(s, s + n, temp);
        sort(temp, temp + n, f);

        bool f = true;
        for (int i = 0; i < n; i++)
            if (s[i] != temp[i]) f = false;

        cout << f;
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
// User function Template for C++
/*The function should return a string denoting the
order of the words in the Alien Dictionary */
unordered_map<char,string> m;
stack<char> ans;


void add(char key,string value)
	{
		if(m.find(key) == m.end())
			m[key] = value;
		else
			m[key] = m.at(key).append(value);

	}

void topo_sort(int visited[],char key)
{
    visited[key-'a'] = 1;

    if(m.find(key) != m.end())
    {
        string s = m[key];

        for(int i=0;i<s.length();i++)
        {
            if(visited[s[i]-'a'] == 0)
                topo_sort(visited,s[i]);
        }

    }

    //out.append(1,key);
    ans.push(key);
}

string printOrder(string dict[], int n, int k) {

    m.clear();
    string out;
    
	int i,j,visited[k];
	for(i=0;i<k;i++)
		visited[i] = 0;
		

	for(i=0;i<n-1;i++)
	{
		if(dict[i][0] != dict[i+1][0])
        {
            string s(1,dict[i+1][0]);
			add(dict[i][0],s);
        }
		else
		{
			int x = min(dict[i].length(),dict[i+1].length());
			for(int j=1;j<x;j++)
			{
				if(dict[i][j]!=dict[i+1][j])
				{
                    string s(1,dict[i+1][j]);
					add(dict[i][j],s);//,dict[i+1][j]);
					break;
				}
			}
		}
	}



	for(auto i:m)
	{
        if(visited[i.first-'a'] == 0)
        {
            topo_sort(visited,i.first);
        }
    }

    
    while(!ans.empty())
    {
        out.append(1,ans.top());
        //cout<<ans.top();
        ans.pop();
    }
    
    return out;
}