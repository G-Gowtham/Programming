// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// Function Prototype
int countChars(string, string);

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    
	    // taking string input
	    string s1, s2;
	    cin >> s1 >> s2;
	    
	    cout << countChars(s1, s2) << endl;
	}
	
	return 0;
}// } Driver Code Ends
//User function Template for C++

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
int countChars(string s1, string s2){
    
    int i = 0,j = 0,n1,n2,count = 0,maxi;
    n1 = s1.length();
    n2 = s2.length();
    int a[26] = {0};
    for(i=0;i<n1;i++)
    {
        a[s1[i]-'a']+=1;
    }
    for(i=0;i<n2;i++)
    {
        a[s2[i]-'a']-=1;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]!=0)
            count += abs(a[i]);
    }
    return count;
}