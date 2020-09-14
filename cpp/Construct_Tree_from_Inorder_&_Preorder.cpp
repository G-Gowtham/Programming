// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

Node *buildTree(int a[],int b[],int str,int end);
int preIndex=0;
void printPostOrder(Node *root){
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		preIndex=0;
		Node *root=NULL;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		root=buildTree(a,b,0,n-1);
		printPostOrder(root);
		cout<<endl;
	}
}// } Driver Code Ends
/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
int p=0;

Node* tree(int in[],int pre[],int start,int end)
{
    if(start > end)
        return NULL;

    Node* root = new Node(pre[p++]);

    // if (start==end)
    //     return root;

    int index;
    for(int i =0 ; i <= end;i++)
    {
        if(in[i] == pre[p-1])
        {
            index = i;
            break;
        }
    }

    root->left = tree(in,pre,start,index-1);
    root->right = tree(in,pre,index+1,end);

    return root;
}

Node* buildTree(int in[],int pre[], int instart, int inend)
{
    p = 0;
    return tree(in,pre,instart,inend);
}
