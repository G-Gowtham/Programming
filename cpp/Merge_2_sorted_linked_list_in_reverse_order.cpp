// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

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
};

*/

struct Node *mergeResult(Node *node1,Node *node2)
{
    Node *ptr1 = node1,*ptr2 = node2;
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

    ptr1 = node1;

    while (ptr1->next)
        ptr1 = ptr1->next;
    
    ptr1->next = node2;
    ptr1 = node1;

    for(int i=v.size()-1;i>=0;i--)
    {
        ptr1->data = v[i];
        ptr1 = ptr1->next;
    }

    return node1;
}