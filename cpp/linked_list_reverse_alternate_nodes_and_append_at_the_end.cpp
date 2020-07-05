// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */

void rearrange(struct Node *odd);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        rearrange(start);
        printList(start);
    }
    return 0;
}
// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

void rearrange(struct Node *head)
{
    Node *odd_head, *even_head, *curr, *pre = NULL, *nex, *even_pre = NULL, *odd_pre = NULL;
    int oe = -1;
    if(head -> next and head -> next -> next)
    {
    odd_head = head -> next;
    odd_pre = odd_head;
    even_head = head;
    even_pre = even_head;

    curr = head -> next -> next;

    while(curr)
    {
        if(oe == 1)
        {
            odd_pre -> next = curr;
            odd_pre = curr;
        }
        else
        {
            even_pre -> next = curr;
            even_pre = curr;
        }
        oe *= -1;
        curr = curr -> next;
    }
    odd_pre -> next = NULL;
    //even_pre -> next = NULL;

    curr = odd_head;

    while(curr)
    {
        nex = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = nex;
    }
    //odd_head = pre;
    even_pre -> next = pre;
    *head = *even_head;
    }
}

