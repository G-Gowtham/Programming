// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}// } Driver Code Ends
/*Complete the function(s) below*/
void push(int a)
{
    s.push(a);
}

bool isFull(int n)
{
     if(s.size()==n)
        return true;
    else
        return false;
}

bool isEmpty()
{
    if(s.empty())
        return true;
    else
        return false;
}

int pop()
{
    int t = s.top();
    s.pop();
    return t;
}

int getMin()
{
   int mini = s.top();
   s.pop();
   while(!s.empty())
   {
       int tmp = s.top();
       if(mini>tmp)
            mini = tmp;
        s.pop();
   }
   return mini;
}