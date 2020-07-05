// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};


Node *insert(Node *root,int data)
{
    if(root==NULL)
    root=new Node(data);
    else if(data<root->data)
    root->left=insert(root->left,data);
    else
    root->right=insert(root->right,data);
    
    return root;
}



 // } Driver Code Ends
/*

The structure of a BST node is as follows:

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/


void inorder(Node* root,int &count,int l,int h)
{
    if(root==NULL)
        return;
    
    if(l<=root->data && root->data<=h)
    {
        count += 1;
        inorder(root->left,count,l,h);
        inorder(root->right,count,l,h);
    }
    else if(root->data<l)
    {
        inorder(root->right,count,l,h);
    }
    else if(root->data>h)
    {
        inorder(root->left,count,l,h);
    }
        
}

int getCountOfNode(Node *root, int l, int h)
{
    int count = 0;
  inorder(root,count,l,h);
  return count;
}


// { Driver Code Starts.


int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        Node *root=NULL;
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        
        for(int i=0;i<sizeOfArray;i++)
        {
            root=insert(root,arr[i]);
        }
        int l,h;
        cin>>l>>h;
        cout<<getCountOfNode(root,l,h)<<endl;
    
        
    }
	return 0;
}  // } Driver Code Ends