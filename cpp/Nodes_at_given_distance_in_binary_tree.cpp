// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

void printkdistanceNodeDown(Node *root, int k);

int printkdistanceNode(Node* root, int target , int k);

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    getchar();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        printkdistanceNode(head, target, k);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends

/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

/* Recursive function to print all the nodes at distance k in the
   tree (or subtree) rooted with given root. See  */

unordered_map<Node*,Node*> umap;
Node *t=NULL;
void traverse(Node *root,int target,Node* pre)
{
    if(root == NULL)
        return;
    
    umap[root] = pre;

    if(root->data == target)
        t = root;

    traverse(root->left,target,root);
    traverse(root->right,target,root);
}

void print_data(int k)
{
    map<int,int> visited;
    queue<Node*> q;
    int count = 0;
    if(t!=NULL)
        q.push(t);

    q.push(NULL);
    while(q.size()>1)
    {
        Node *tmp = q.front();
        q.pop();
        if(tmp!=NULL)
        {
            
            if(tmp->left != NULL && (visited.find(tmp->left->data) == visited.end()))//visited[tmp->left->data] == 0 )
            {
                q.push(tmp->left);
                //cout<<tmp->left->data<<" ";
            }
            if(tmp->right != NULL && (visited.find(tmp->right->data) == visited.end()))//visited[tmp->right->data] == 0)
            {
                q.push(tmp->right);
                //cout<<tmp->right->data<<" ";
            }
            if(umap[tmp] != NULL && (visited.find(umap[tmp]->data) == visited.end()))//visited[(umap[tmp])->data] == 0)
            {
                q.push(umap[tmp]);
                //cout<<umap[tmp]->data<<" ";
            }

            visited[tmp->data] = 1;

        }
        else
        {
            count += 1;
            q.push(NULL);
            if(count == k)
                break;
            
        }
    }

    while(q.size()>1)
    {
        cout<<q.front()->data<<" ";
        q.pop();
    }

}

int printkdistanceNode(Node* root, int target , int k)
{
    umap.clear();
    t = NULL;
    traverse(root,target,NULL);
    print_data(k);
}
