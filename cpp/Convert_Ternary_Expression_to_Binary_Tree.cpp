// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
	
	Node(char x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

void preorder(Node *root){
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
Node *convertExpression(string str,int i);
int main(){
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		Node *root=convertExpression(str,0);
		preorder(root);
		cout<<endl;
	}
}// } Driver Code Ends
/*Complete the function below
Node is as follows
struct Node{
	char data;
	Node *left,*right;
};
*/
Node *make_tree(string s,int start,int end)
{
    if(start == end)
    {
        Node *n = new Node(s[start]);
        n->left = NULL;
        n->right = NULL;
        return n;
    }
    int j=0;
    int i;
    for(i = start+1;i<=end;i++)
    {
        if(s[i] == '?')
            j += 1;
        else if(s[i] == ':')
            j -= 1;
        if(j == 0)
        {   j = i;
            break;
        }
    }       
    Node *n = new Node(s[start]);
    n->left = make_tree(s,start+2,j-1);
    n->right = make_tree(s,j+1,end);
    return n;
}

Node *convertExpression(string s,int i)
{
    int n = s.size();
    Node *head = make_tree(s,0,n-1);
    return head;
}