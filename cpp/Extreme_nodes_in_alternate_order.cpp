// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
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
void printExtremeNodes(Node* root);

int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		
        printExtremeNodes(root);
   		cout<<endl;
  }
  return 0;
}
// } Driver Code Ends
/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

/* Function to print nodes of extreme corners
of each level in alternate order */
void printExtremeNodes(Node* root)
{
   stack<Node*> left_to_right, right_to_left;

    if(root)
        right_to_left.push(root);

    while(!(left_to_right.empty()) or !(right_to_left.empty()))
    {
        if(!(left_to_right.empty()))
            cout<<left_to_right.top()->data<<" ";

        while(!(left_to_right.empty()))
        {
            if(left_to_right.top()->left != NULL)
                right_to_left.push(left_to_right.top()->left);
            if(left_to_right.top()->right != NULL)
                right_to_left.push(left_to_right.top()->right);
            left_to_right.pop();
        }

        if(!(right_to_left.empty()))
            cout<<right_to_left.top()->data<<" ";

        while(!(right_to_left.empty()))
        {
            if(right_to_left.top()->right != NULL)
                left_to_right.push(right_to_left.top()->right);
            if(right_to_left.top()->left != NULL)
                left_to_right.push(right_to_left.top()->left);
            right_to_left.pop();
        }
    }
}
