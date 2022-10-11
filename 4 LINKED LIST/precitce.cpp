//{ Driver Code Starts
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


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  node is defined as 
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
struct node* rev(struct node* p){
    struct node *a,*b,*c;
    a=p;
    b=0;
    c=0;
    while(a!=0){
        c=b;
        b=a;
        a=a->next;
    b->next=c;
    }
    p=b; // NOT P=A because a=0; and b= last element of linked list
    
    return p;
 }

node* b=0;

 node* rev(node* p,int k){
    node *a,*b,*c;
    
    a=p;
    // b=0;
    c=0;
    while(a!=0&&k--){
        c=b;
        b=a;
        a=a->next;
    b->next=c;
    }
    a=b; // NOT P=A because a=0; and b= last element of linked list
    
    return a;
 }
 


class Solution
{
    public:
     struct node *reverse (struct node *head, int k)
    { int y=k;
         if (!head)
        return NULL;
    node* c= head;
    while(y>1){
        y--;
        c=c->next;
    }
    node* r=rev(head,k);
    if(c!=0){
        head->next=reverse(c,k);
    }
    return b;
    // int count = 0;
  
    /*reverse first k nodes of the linked list */
   
  
    /* next is now a pointer to (k+1)th node
    Recursively call for the list starting from current.
    And make rest of the list as next of first node */
    }  

    
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t=1;
    
     
    
        struct node* head = NULL;
        struct node* temp = NULL;
    while(t--)
        {
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
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
        
        Solution ob;
        head = ob.reverse(head, k);
        printList(head);}
    
     
    return(0);
}


// } Driver Code Ends