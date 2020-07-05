// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

void sort_and_print(vector <int> &v)
{
    sort( v.begin() , v.end() );
    for( int i=0 ; i<v.size() ; i++ )
        cout<< v[i] << " ";
    v.clear();
}

void printLevelOrder(struct Node* root)
{
    vector <int> v;
    queue <Node*> q;
    
    q.push(root);
    
    Node* next_row = NULL;
    
    while(!q.empty())
    {
        Node* n = q.front();
        q.pop();
        
        if(n==next_row)
        {
            sort_and_print(v);
            next_row = NULL;
        }
        
        v.push_back(n->data);
        
        if(n->left)
        {
            q.push(n->left);
            if(next_row == NULL) next_row = n->left;
        }
        
        if(n->right)
        {
            q.push(n->right);
            if(next_row == NULL) next_row = n->right;
        }
    }
    sort_and_print(v);
}

Node *createTree(int parent[], int n);

/* Driver program to test above function*/
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int a[n];
        for( int i=0 ; i<n ; i++ )
            cin>> a[i];
        
        struct Node *res = createTree(a,n);
        
        printLevelOrder(res);
        cout<<endl;
    }

    return 0;
}

// } Driver Code Ends


/* node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

/*  Function which returns the  root of 
    the constructed binary tree. */

Node *createTree(int parent[], int n)
{
    //int x = *max_element(parent,parent+n);
    int left[n],right[n];
    memset(left,-1,sizeof(left));
    memset(right,-1,sizeof(right));
    int root_val = 0;

    for(int i=0;i<n;i++)
    {
        if(parent[i] == -1)
        {
            root_val = i;
        }
        else
        {
            if(left[parent[i]] == -1)
            {
                left[parent[i]] = i;
            }
            else
            {
                right[parent[i]] = i;
            }
            
        }
    }

    Node *root = new Node(root_val);
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node *tmp = q.front();
        q.pop();

        if(left[tmp->data] != -1)
        {
            Node *n = new Node(left[tmp->data]);
            tmp->left = n;
            q.push(n);
        }
        if(right[tmp->data] != -1)
        {
            Node *n = new Node(right[tmp->data]);
            tmp->right = n;
            q.push(n);
        }
    }

    return root;
}