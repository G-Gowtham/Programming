#include<bits/stdc++.h>
using namespace std;

string LongestPalindromeSubString(string text);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<< LongestPalindromeSubString(s) << endl;
    }
    return 1;
}


void find(char a[],int *p,int n,int &maxi,int &index)
{
    int left_boundary = 0 , right_boundary = 0, center = 0;
    int i=0,max_lps = 0,mirror;
    
    //for(i=1;i<n+1;i++)
    while(right_boundary<n && max_lps<n-i)
    {
        i += 1;
        mirror = 2* center - i; //can be left-right - i

        if(i<right_boundary)
            p[i] = min(right_boundary-i,p[mirror]);
        
        while(a[i+p[i]+1] == a[i-(p[i]+1)])
            p[i] += 1;
        
        if(i+p[i]>right_boundary)
        {
            right_boundary = i + p[i];
            center = i;
        }

        if(p[i]>max_lps)
        {
            max_lps = p[i];
            maxi = p[i];
            index = i;
        }
    }

    for(i=0;i<n+2;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    for(i=0;i<n+2;i++)
        cout<<p[i]<<" ";
    cout<<"\n";
}


string LongestPalindromeSubString(string s)
{
    int n = s.size();
    int p[((2*n)+3)] = {0};
    char a[((2*n)+3)];
    int j = 0,i;
    int maxi = 0;
    int index = 0;
    for(i=1;i<2*n;i+=2)
    {
        a[i] = '#';
        a[i+1] = s[j];
        j += 1; 
    }
    a[0] = '(';
    a[(2*n)+1] = '#';
    a[(2*n)+2] = ')';
    find(a,p,(2*n)+1,maxi,index);

    int left,right;
    string ans;
    if(maxi&1)
    {
        ans = a[index];
        left = index-2;
        right = index+2;
    }
    else
    {
        left = index-1;
        right = index+1;
    }

    maxi = maxi/2;

    while(maxi--)
    {
        ans = a[left] + ans;
        ans = ans + a[right];
        left -= 2;
        right += 2;
    }

    return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/*
void find(char a[],int *p,int n,int &maxi,int &index)
{
    int left_boundary = 2 , right_boundary = 2, center = 2;
    int left,right,i=2,max_lps = 0,count = 0,expand = 0,diff;
    p[center] = 1;

    while(right_boundary<n && i<n && (max_lps < n-i))
    {
        if(a[i] == '#')
        {
            left = i-1;
            right = i+1;
            count = 0;
        }
        else
        {
            left = i-2;
            right = i+2;
            count = 1;
        }

        expand = 0; 
		diff = right_boundary - i; 

		if(diff > 0) 
		{ 
			if(p[center] < diff) // Case 1 
				p[i] = p[center]; 
			else if(p[center] == diff && i == n-1) // Case 2 
				p[i] = p[center]; 
			else if(p[center] == diff && i < n-1) // Case 3 
			{ 
					p[i] = p[center]; 
					expand = 1; // expansion required 
			} 
			else if(p[center] > diff) // Case 4 
			{ 
				p[i] = diff; 
				expand = 1; // expansion required 
			} 
		} 
		else
		{ 
			p[i] = 0; 
			expand = 1; // expansion required 
		} 


        if(expand == 1)
        {

            while(a[left]==a[right])
            {
                left -= 2;
                right += 2;
                count += 2;
                // p[i]+=1;
            }
        }

        p[i] = count;

        if(max_lps < p[i])
        {
            max_lps = p[i];
            maxi = p[i];
            index = i;
        }

        if(right_boundary<right-2)
        {
            center = i;
            left_boundary = left-1;
            right_boundary = right-1;
        }
        i += 1;
    }

    for(i=0;i<n+2;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    for(i=0;i<n+2;i++)
        cout<<p[i]<<" ";
    cout<<"\n";
    

}
*/
//////////////////////////////////////////////////////