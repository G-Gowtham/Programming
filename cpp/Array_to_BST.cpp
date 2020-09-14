#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left = NULL;
        Node *right = NULL;
};


Node* make_tree(int a[],int start,int end)
{
    if(start>end)
       return NULL;

    int mid = (start+end)/2;
    Node *n = new Node();
    n->data = a[mid];
    n->left = make_tree(a,start,mid-1);
    n->right = make_tree(a,mid+1,end);
    return n;
}

void traverse(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    traverse(root->left);
    traverse(root->right);
}

void fn()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0;i<n;i++)
        cin>>a[i];
    Node *head = make_tree(a,0,n-1);
    traverse(head);
    cout<<"\n";
}

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        fn();
    }
	return 0;
}