// { Driver Code Starts
#include <bits/stdc++.h>
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

void topView(struct Node *root);


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,i,k;
        cin>>n;
        i=n;

        Node* root=NULL;
        queue <Node*> q;
        while(i>0)
        {
            int a,b;
            char c;
            cin>> a >> b >> c;
            if(!root){
                root = new Node(a);
                q.push(root);
            }
            Node* pick = q.front();
            q.pop();

            if(c == 'L'){
                pick->left = new Node(b);
                q.push( pick->left );
            }
            cin>> a >> b >> c;
            if(c == 'R'){
                pick->right = new Node(b);
                q.push( pick->right );
            }
            i-=2;
        }
//        inorder(root);
//        cout<<endl;
        topView(root);
        cout << endl;
    }
    return 0;
}




// } Driver Code Ends
//Structure of binary tree
/*struct Node
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/
// function should print the topView of the binary tree



void topView(struct Node *root)
{
    map<int,vector<int>> m;
    
    queue<pair<Node*,int>> q;

    q.push(make_pair(root,0));

    while(!q.empty())
    {

            if(q.front().first->left != NULL)
            {
                q.push({q.front().first->left,q.front().second-1});
            }
            if(q.front().first->right!= NULL)
            {
                q.push({q.front().first->right,q.front().second+1});
            }
            m[q.front().second].push_back(q.front().first->data);
            q.pop();

    }

    for(auto i:m)
    {
        cout<<i.second[0]<<" ";
    }
}


