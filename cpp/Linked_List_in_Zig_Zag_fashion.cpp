// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *root)
{
	Node *temp = root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
 
 Node *zigZag(Node* head);


int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *ans = zigZag(head);
		print(ans);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends


/*

The structure of linked list is the following
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

//a < b > c < d > e < f ..
//11 15 20 5 10

Node *zigZag(Node* head)
{
    Node *pre = NULL,*curr = head,*tmp;
    int flag = 1;

    while(curr->next)
    {
        
        if(flag == 1)
        {
            if(curr->data > curr->next->data)
            {
                if(pre == NULL)
                {
                    tmp = curr->next;
                    curr->next = curr->next->next;
                    tmp->next = curr;
                    pre = tmp;
                    head = pre;
                }
                else
                {
                    tmp = curr->next;
                    curr->next = curr->next->next;
                    pre->next = tmp;
                    tmp->next = curr;
                    pre = tmp;
                }
                
            }
            else
            {
                pre = curr;
                curr = curr->next;
            }
        }
        else
        {
            if(curr->data < curr->next->data)
            {
                tmp = curr->next;
                curr->next = curr->next->next;
                pre->next = tmp;
                tmp->next = curr;
                pre = tmp;
            }
            else
            {
                pre = curr;
                curr = curr->next;
            }
        }  
        
        flag *= -1;
    }      

    return head; 
}