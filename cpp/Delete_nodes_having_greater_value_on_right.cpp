#include<bits/stdc++.h>

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


Node *compute(Node *head);

int main()
{
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
				temp = temp->next;
			}
		}

        Node *result = compute(head);
        print(result);
        cout<<endl;
    }
}
// } Driver Code Ends
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
Node *compute(Node *head)
{
    Node *curr= head,*pre = NULL,*nex,*tmp=head,*ref;
    while(curr)
    {
        nex = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = nex;
    }
    //return pre;
    head = pre;
    curr = pre->next;
    ref = pre;
    while(curr)
    {
        if(curr->data >= ref->data)
        {
            ref->next = curr;
            ref = curr;
        }
        curr = curr -> next;
    }
    ref->next = NULL;
    pre = NULL;
    curr = head;
    while(curr)
    {
        nex = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = nex;
    }
    return pre;
}
