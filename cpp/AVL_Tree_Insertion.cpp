// { Driver Code Starts
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
 
/* UTILITY FUNCTIONS TO TEST isBalanced() FUNCTION */
 
/* returns maximum of two integers */
   
 
/*  The function Compute the "height" of a tree. Height is the
    number of Nodes along the longest path from the root Node
    down to the farthest leaf Node.*/


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
Node* insertToAVL(Node* Node, int data);

vector<int> z;
void inorder(Node *root)
{
//	z.clear();
	if(root==NULL)
	return;
	{
		inorder(root->left);
		z.push_back(root->data);
		inorder(root->right);
	}
}


/* Drier program to test above function*/
int main()
{



int t;
cin>>t;
while(t--)
{
    int q;
    cin>>q;
    Node *root = NULL;
    bool f= true;
    vector<int> a;
    while(q--)
    {
        int k;
        cin>>k;
        a.push_back(k);
        root = insertToAVL(root,k);

        if(!isBalanced(root)){
            f=false;
            break;
        }
    }
    
    z.clear();
    
    inorder(root);
    
    set<int> s(a.begin(),a.end());
   	vector<int>zz(s.begin(),s.end());
    if(z.size()!=zz.size())
    f=false;
    else{
    for(int i=0;i<z.size();i++)
    {
    	if(z[i]!=zz[i])
    	f=false;
    }
    }

    if(f)
        cout<<1<<endl;
    else 
        cout<<0<<endl;
}

return 0;
}
// } Driver Code Ends


/* The structure of the Node is
struct Node
{
    int data;
    Node *left;
    Node *right;
    int height;
};
*/

/*You are required to complete this method */

int height(Node *node)
{
    if(node == NULL)
        return 0;
    return node->height;
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


Node *traverse(Node *root,int k)
{

    if(root == NULL)
    {
        Node *n = new Node(k);
        return n;
    }
    if(root->data > k )
    {
        root->left = traverse(root->left,k);     
    }
    else if(root->data < k)
    {
    
        root->right = traverse(root->right,k);
    }
    else
    {
        return root;
    }

    root->height = max(height(root->left),height(root->right))+1;

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) > 1)
    {
        
        //left 
        if(root->data > k)
        {
            //ll
            if(root->left->data > k)
            {
                return ll_rotation(root);
            }
            //lr
            else
            {
                return lr_rotation(root);
            }
        }
        //right
        else
        {
            //rr
            if(root->right->data < k)
            {
                return rr_rotation(root);
            }
            //rl
            else
            {
                return rl_rotation(root);
            }
        }
    }

    return root;
}

void print(Node *root)
{
    if(root == NULL)
        return;
    print(root->left);
    cout<<root->data<<root->height<<" ";
    print(root->right); 
}

Node* insertToAVL(Node* node, int k)
{
    
    return traverse(node,k);
}