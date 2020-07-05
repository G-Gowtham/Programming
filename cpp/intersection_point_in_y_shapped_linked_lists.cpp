#include<iostream>
#include<stdio.h>
using namespace std;

/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

int intersectPoint(struct Node* head1, struct Node* head2);

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    if (*head_ref == NULL)
        *head_ref = new_node;
    else
        (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}

/* Driver program to test above function*/
int main()
{
    int T,i,n1, n2, n3,l,k;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;

        struct Node *head1 = NULL,  *tail1 = NULL;
        for(i=1; i<=n1; i++)
        {
            cin>>l;
            append(&head1, &tail1, l);
        }
        struct Node *head2 = NULL,  *tail2 = NULL;
        for(i=1; i<=n2; i++)
        {
            cin>>l;
            append(&head2, &tail2, l);
        }
        struct Node *head3 = NULL,  *tail3 = NULL;
        for(i=1; i<=n3; i++)
        {
            cin>>l;
            append(&head3, &tail3, l);
        }

        if (tail1 != NULL)
        tail1->next = head3;
        if (tail2 != NULL)
        tail2->next = head3;

        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    Node *big, *small, *tmp;
    int count1 = 0, count2 = 0,d;
    tmp = head1;
    while(tmp)
    {
        count1 += 1;
        tmp = tmp -> next;
    }
    
    tmp = head2;

    while(tmp)
    {
        count2 += 1;
        tmp = tmp -> next;
    }
    
    if(count1 == 0 || count2== 0)
        return -1;
        
    d = abs(count1 - count2);
    
    if(count1 > count2)
    {
        big = head1;
        small = head2;
    }
    else
    {    
        big = head2;
        small = head1;
    }
    
    count1 = 0;

    while(count1 != d)
    {
        big = big -> next;
        count1 += 1;
    }
    
    while(big)
    {
        if(big == small)
        {
            return big -> data;
        }
        big = big -> next;
        small = small -> next;
    }
    return -1;

}