// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

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


vector <int> printBoundary(Node *root);

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



int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        vector <int> res = printBoundary(root);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

vector<int> v;

void left(Node *root)
{
    queue<Node *> q;
    q.push(NULL);
    if(root->left != NULL)
        q.push(root->left);

    while(q.size()>1)
    {
        Node *tmp = q.front();
        q.pop();
        
        if(tmp != NULL)
        {
            if(tmp->left != NULL)
                q.push(tmp->left);
            if(tmp->right != NULL)
                q.push(tmp->right);

        }
        else
        {
            if((q.size()>0) && q.front()->left != NULL || q.front()->right!=NULL)
                v.push_back(q.front()->data);

            q.push(NULL);
        }
    }

    
}


void bottom(Node *root)
{
    if(root == NULL)
        return;
    
    if(root->left == NULL && root->right == NULL)
        v.push_back(root->data);
    
    bottom(root->left);
    bottom(root->right);
    

}


void right(Node *root)
{
    queue<Node *> q;
    stack<int> st;

    q.push(NULL);
    if(root->right != NULL)
        q.push(root->right);

    while(q.size()>1)
    {
        Node *tmp = q.front();
        q.pop();
        
        if(tmp != NULL)
        {
            if(tmp->right != NULL)
                q.push(tmp->right);
            if(tmp->left != NULL)
                q.push(tmp->left);
        }
        else
        {
            if((q.size()>0) && q.front()->left != NULL || q.front()->right!=NULL)
                st.push(q.front()->data);

            q.push(NULL);
        }
    }

    while(st.size()>0)
    {
        //cout<<st.top()<<" ";
        v.push_back(st.top());
        st.pop();
    }
    //cout<<"\n";
}

vector<int> printBoundary(Node *root)
{

    v.clear();   
    v.push_back(root->data);

    left(root);
    bottom(root);
    right(root);
    return v;
}