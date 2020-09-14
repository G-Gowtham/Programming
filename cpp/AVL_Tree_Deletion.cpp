// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	int height;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	    height = 1;
	}
};
struct Node* deleteNode(struct Node* root, int data);
int max(int a, int b);
int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
int max(int a, int b)
{
    return (a > b)? a : b;
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;
    x->right = y;
    y->left = T2;
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
    return x;
}
struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;
    y->left = x;
    x->right = T2;
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
    return y;
}
int getBalance(struct Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

struct Node* insert(struct Node* node, int data)
{
    if (node == NULL)
        return(new Node(data));
 
    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    else 
        return node;
    node->height = 1 + max(height(node->left),height(node->right));
    int balance = getBalance(node);
    if (balance > 1 && data < node->left->data)
        return rightRotate(node);
    if (balance < -1 && data > node->right->data)
        return leftRotate(node);
    if (balance > 1 && data > node->left->data)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
    if (balance < -1 && data < node->right->data)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}
struct Node * minValueNode(struct Node* node)
{
    struct Node* current = node;
    while (current->left != NULL)
        current = current->left;
 
    return current;
}
int heigh(struct Node* Node)
{
   /* base case tree is empty */
   if(Node == NULL)
       return 0;
 
   /* If tree is not empty then height = 1 + max of left
      height and right heights */
   return 1 + max(heigh(Node->left), heigh(Node->right));
} 
bool isBalanced(struct Node *root)
{
   int lh; /* for height of left subtree */
   int rh; /* for height of right subtree */ 
 
   /* If tree is empty then return true */
   if(root == NULL)
    return 1; 
 
   /* Get the height of left and right sub trees */
   lh = heigh(root->left);
   rh = heigh(root->right);
 
   if( abs(lh-rh) <= 1 &&
       isBalanced(root->left) &&
       isBalanced(root->right))
     return 1;
 
   /* If we reach here then tree is not height-balanced */
   return 0;
}

int _B_(Node *root)
{
    if(root==NULL)
        return 0;
    int lH = _B_(root->left);
    if(lH==-1)return -1;
    int rH = _B_(root->right);
    if(rH==-1)
        return -1;

    if(abs(lH-rH)>1)
        return -1;
    return max(lH,rH)+1;
}

bool _B(Node *root)
{
    if(_B_(root)==-1)
        return false;
    else 
        return true;
}

bool I_(Node* root)
{
    static struct Node *prev = NULL;
     
    if (root)
    {
        if (!I_(root->left))
          return false;
 
        if (prev != NULL && root->data <= prev->data)
          return false;
 
        prev = root;
 
        return I_(root->right);
    }
 
    return true;
}

vector<int> z;
void inOrder(struct Node *root)
{
    if(root != NULL)
    {
        
        inOrder(root->left);
        z.push_back(root->data);
        inOrder(root->right);
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a;
		struct Node *root = NULL;
		for(int i=0;i<n;i++){
		int k;
		cin>>k;
		a.push_back(k);
		root = insert(root, k);
		}
		int k;
		cin>>k;
		root = deleteNode(root, k);
		bool f=true;
		if(!isBalanced(root)){
            f=false;
        }
        
    z.clear();
    inOrder(root);
    set<int> s(a.begin(),a.end());
   	vector<int>zz(s.begin(),s.end());
    if(z.size()!=zz.size()-1){
    f=false;
    }

    if(f)
        cout<<1<<endl;
    else 
        cout<<0<<endl;
    }
    return 0;
}

Node *ll_rotation(Node *head)
{
    Node *l1 = head->left;
    Node *l2 = l1->left;

    head->left = l1->right;

    head->height = max(height(head->left),height(head->right))+1;

    l1->right = head;

    l1->height = max(height(l1->left),height(l1->right))+1;
    return l1;
}

Node *rr_rotation(Node *head)
{
    Node *r1 = head->right; 
    Node *r2 = r1->right;

    head->right = r1->left;

    head->height = max(height(head->left),height(head->right))+1;

    r1->left = head;

    r1->height = max(height(r1->left),height(r1->right))+1;

    return r1;
}

Node *lr_rotation(Node *head)
{
    Node *l = head->left;
    Node *r = l->right;

    l->right = r->left;
    head->left = r->right;

    l->height = max(height(l->left),height(l->right))+1;

    head->height = max(height(head->left),height(head->right))+1;

    r->left = l;
    r->right = head;

    r->height = max(height(r->left),height(r->right))+1;
    
    return r;
}

Node *rl_rotation(Node *head)
{
    Node *r = head->right;
    Node *l = r->left;

    head->right = l->left;
    r->left = l->right;

    head->height = max(height(head->left),height(head->right))+1;
    
    r->height = max(height(r->left),height(r->right))+1;

    l->left = head;
    l->right = r;

    l->height = max(height(l->left),height(l->right))+1;
    
    return l;
}

Node *inorder_successor(Node *root)
{

    if(root == NULL)
        return NULL;
        
    while(root->left != NULL)
        root = root->left;
        
    return root;
}

Node *traverse(Node *root,int x)
{
    if(root == NULL)
        return root;

    else if(root->data>x)
    {
        root->left = traverse(root->left,x);
    }
    else if(root->data<x)
    {
        root->right = traverse(root->right,x);
    }
    else
    {
        if(root->left == NULL && root->right ==NULL)
        {
            delete root;
            root = NULL;
        }
        else if(root->right == NULL)
        {

            Node *tmp = root->left;
            delete root;
            root = tmp;
        }
        else if(root->left == NULL)
        {
            Node *tmp = root->right;
            delete root;
            root = tmp;
        }
        else
        {
            Node *tmp = inorder_successor(root->right);
            root->data = tmp->data;
            root->right = deleteNode(root->right,tmp->data);
        } 
    }

    if(root==NULL)
        return root;
    
    root->height = max(height(root->left),height(root->right))+1;
    
    int balance = getBalance(root);  
     
    if (balance > 1 &&  getBalance(root->left) >= 0)
    {  
        return ll_rotation(root);  
    }
    
    if (balance > 1 &&  getBalance(root->left) < 0)  
    {  
        // root->left = leftRotate(root->left);  
        // return rightRotate(root);
        return lr_rotation(root);  
    }  
   
    if (balance < -1 &&  getBalance(root->right) <= 0)
    {  
        return rr_rotation(root);  
    }
    if (balance < -1 &&  getBalance(root->right) > 0)  
    {  
        // root->right = rightRotate(root->right);  
        // return leftRotate(root);  
        return rl_rotation(root);
    }  

    return root;
}

void print(struct Node *root)
{
    if(root != NULL)
    {
        
        print(root->left);
        cout<<root->data<<root->height<<" ";
        print(root->right);
    }
}

Node *deleteNode(Node *root,  int x)
{
    print(root);
    cout<<" end\n";
    Node *tmp = traverse(root,x);
    print(tmp);
    cout<<"\n";
    return tmp;
}