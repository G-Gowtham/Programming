// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("\n");
}

void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	new node(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

struct node* makeUnion(struct node* head1, struct node* head2);

int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(makeUnion(a, b));
    }
    return 0;
}
// } Driver Code Ends


/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
struct node* makeUnion(struct node* head1, struct node* head2)
{
    node *ptr1=head1,*ptr2 = head2;
    vector<int> v;
    
    while(ptr1 && ptr2)
    {
        if(ptr1->data<ptr2->data)
        {
            v.push_back(ptr1->data);
            ptr1 = ptr1->next;
        }
        else
        {
            v.push_back(ptr2->data);
            ptr2 = ptr2->next;
        }
    }

    while(ptr1)
    {
        v.push_back(ptr1->data);
        ptr1 = ptr1->next;
    }
    while(ptr2)
    {
        v.push_back(ptr2->data);
        ptr2 = ptr2->next;
    }

    sort(v.begin(),v.end());

    ptr1 = head1;

    while (ptr1->next)
        ptr1 = ptr1->next;
    
    ptr1->next = head2;
    ptr1 = head1;

    for(int i=0;i<v.size();i++)
    {
        if(i == v.size()-1 || v[i] != v[i+1])
        {
            ptr1->data = v[i];
            if(i!=v.size()-1)
                ptr1 = ptr1->next;
        }
    }
    
    ptr2 = ptr1->next;
    ptr1->next = NULL;
    
    while(ptr2)
    {
        node *tmp = ptr2->next;
        delete ptr2;
        ptr2 =tmp;
    }
    return head1;
}