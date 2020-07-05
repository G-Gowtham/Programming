// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct node *reverse (struct node *head, int k);

struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* UTILITY FUNCTIONS */
/* Function to push a node */

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
int main(void)
{
    /* Start with the empty list */

     int t;
     cin>>t;
     
     while(t--)
     {
         struct node* head = NULL;
         struct node* temp = NULL;
         int n;
         cin >> n;
         
         for(int i = 0;i<n;i++){
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
         }
        
        int k;
        cin>>k;
        head = reverse(head, k);

        printList(head);
    
     }
     
     return(0);

}

// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

struct node *reverse (struct node *head, int k)
{ 
   struct node *lhead = head,*ltail,*tmp = head;
   struct node *rtail,*rhead,*curr,*pre,*nex;
   int count = 0;
  while(tmp -> next)
  {
      count++;
      if(count==k)
      {
          ltail = tmp;
          rhead = tmp -> next;
          ltail -> next = NULL;
          break;
      }
      tmp = tmp -> next;
       
  }
  pre = NULL;
  curr = lhead;
  while(curr)
  {
      //cout<<curr->data<<" ";
      nex = curr ->next;
      curr->next = pre;
      pre = curr;
      curr = nex;
      
  }
  //cout<<"\n";
  ltail = lhead;
  lhead = pre;
  //cout<<lhead->data;
   pre = NULL;
   curr = rhead;
   while(curr)
    {
      //cout<<curr->data;
      nex = curr ->next;
      curr->next = pre;
      pre = curr;
      curr = nex;
   }
  rhead = pre;
  ltail -> next = rhead;
  return lhead;

}
