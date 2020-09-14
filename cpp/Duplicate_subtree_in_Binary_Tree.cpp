// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *left;
	struct Node *right;
	
	Node(char x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

struct Node* insert(struct Node* root,char data)
{
    if(root==NULL){
        root= new Node(data);
        return root;
    }

    else if(root->data<data)
    root->right=insert(root->right,data);

    else if(root->data>data)
    root->left=insert(root->left,data);

  return root;
}







struct Node* insertString(struct Node* root,string s, int *j)
{

    if((*j)>=s.length())
    return NULL;

	          if(s[*j]=='(')
	          (*j)++;


	         if(s[*j]!='('&&s[*j]!=')'){
	             
	             char n=0;
	             n = s[*j];
             (*j)++;

	          root=insert(root,n);

	          //cout<<"root->data="<<root->data<<endl;

	         // (*j)++;

	          if(s[*j]==')'){
                root->left=NULL;
              root->right=NULL;
              //cout<<"root->data="<<root->data<<endl;
              //cout<<"root->left=NULL\n";
              //cout<<"root->right=NULL\n";
              return root;
	          }

	         }

             if(s[*j]=='(')
	          (*j)++;

	          if(s[*j]==')'){
	            //  cout<<"root->data="<<root->data<<endl;
              //cout<<"root->left=NULL\n";
	          root->left=NULL;
	          }
              else{
                //    cout<<"root->left->parent->data="<<root->data<<endl;
	          root->left=insertString(root->left,s,j);
              }

//cout<<"right\n";

              while(s[*j]==')')
	          (*j)++;

	          if(s[*j]=='(')
	          (*j)++;

	          if(s[*j]==')'){
      //        cout<<"root->data="<<root->data<<endl;
        //      cout<<"root->right=NULL\n";
	          root->right=NULL;
	          (*j)++;
	          }
	          else{
          //    cout<<"root->right->parent->data"<<root->data<<endl;
              root->right=insertString(root->right,s,j);
	          }
return root;
}

void print(struct Node* root)
{

    if(root==NULL)
        return;


    print (root->left);
    cout<<root->data<<endl;
    print(root->right);

}
bool dupSub(Node *root);

int main() {
	//code
	int i,j,k,T ,level;
	char s[500];

	   cin>>T;

	   for(i=0;i<T;i++)
	   {
	     // cin>>level;

	      cin>>s;

	      int j=0;

	      struct Node* root=NULL;

	      root=insertString(root,s,&j);
	   
        cout<<dupSub(root)<<endl;

	  

	   }




	return 0;
}

// } Driver Code Ends


/*The structure of the Binary Tree Node  is
struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};*/

/*This function returns true if the tree contains 
a duplicate subtree of size 2 or more else returns false*/
void traverse(Node *root,vector<string> &v)
{
    if(root == NULL)
        return;
    
    string s = "";
    s += root->data;

    if(root->left != NULL && root->right != NULL)
    {
        s += root->left->data;
        s += root->right->data;
    }
    else if(root->left != NULL)
    {
        s += root->left->data;
        s += " ";
    }
    else if(root->right != NULL)
    {
        s += " ";
        s += root->right->data;
    }

    v.push_back(s);

    traverse(root->left,v);
    traverse(root->right,v);
}

bool dupSub(Node *root)
{
     vector<string> v;
     traverse(root,v);
    map<string,int> m; 
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        if(m.find(v[i]) != m.end())
        {
            if(v[i].size()>1)
            {
                return 1;
            }
        }
        else
        {
            m[v[i]] = 1;
        }
    }

    return 0;
}