
#include<bits/stdc++.h>
using namespace std;
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

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


int main(void)
{

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


struct node *reverse (struct node *head, int k)
{ 
//    struct node *lhead = head,*ltail,*tmp = head;
//    struct node *rtail,*rhead,*curr,*pre = NULL,*nex,*pre_par;
//    int count = 0,h_count = 0;
//   while(tmp -> next)
//   {
      
//       count++;
//       if(count == 1)
//       {
//           lhead = tmp;
//       }
      
//       if(count==k)
//       {  
//           h_count++;
//           ltail = tmp;
//           curr = lhead;

//           while(curr!=tmp->next)
//           {
//               //cout<<curr->data;
//               nex = curr -> next;
//               curr -> next = pre;
//               pre = curr;
//               curr = nex;
//               count = 0;
//           }
//         //   //cout<<"\n";
//           if (h_count == 1)
//           {
//               head = pre;
//               pre_par = lhead;
//               //cout<<lhead->data<<"\n";
//           }
//           else
//           {
//               pre_par -> next = pre;
//               pre_par = lhead;
//           }
          
//       }
//     tmp = tmp -> next;
//   }
//   cout<<head->next->data<<"\n";
//   return head;

// struct node dummyGroupTail = {0};
// struct node* lastGroupTail = &dummyGroupTail;

// while (NULL != head) {
// struct node* nextGroupTail = head;
// struct node* rev = NULL;
// for (int cnt = k; (0 != cnt--) && (NULL != head); ) {
// struct node* next = head->next;
// head->next = rev;
// rev = head;
// head = next;
// }
// lastGroupTail->next = rev;
// lastGroupTail = nextGroupTail;
// }
// return dummyGroupTail.next;

// 

struct node *curr=head,*pre = NULL,*nex;
int count=k;
while(count-- && curr )
{
    nex = curr -> next;
    curr -> next = pre;
    pre = curr;
    curr = nex;
}
if(head)
    head->next = reverse(nex,k);
return pre;
}
