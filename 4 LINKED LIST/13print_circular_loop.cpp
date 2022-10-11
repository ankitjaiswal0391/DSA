#include<bits/stdc++.h>
using namespace std;
// #include "node.cpp"
 class node{
public:
int data;
node *link;
node(int d){
    data=d;
    link=0;
}
 };


 node* head=nullptr;

 node* inputde()
 {int d;
 node* tail;
 cout<<" enter the deta";
 cin>>d;
 while (d!=-1)
 {node*newnode=new node(d);
    if(head==0){
        head=newnode;
        tail=newnode;

 }
 else{
    tail->link=newnode;
    tail=newnode;}
 
    /* code */cin>>d;
 }
    tail->link=head;
 return head;
 
 }
 /*void diplayf(node* const &p){
    int k=0;
    node* t=p;
    // while((t!=head||k==0)&&k<=20)
    while(t!=head||k==0)
        {k++;
    cout<<t->data<<" ";
    t=t->link;
    
        }
        // while(p!=head);
    
 }*/


 // FOR RECURSION WAY 
 void diplayf(node*  p){
    int static k=0;
    if(p!=head||k==0){
        k=1;
        cout<<p->data<<" ";
        p=p->link;
        diplayf(p);
    }
    
  
 }
 


 int lopp(node* f){
    node* p=f;
    node* q=f;
    p=p->link;
    q=q->link->link;
    while (p!=q)
    {q=q->link->link;
    p=p->link;
    if(q->link==0||q==0){
        return 10;
    }
    
        /* code */
    }
    if(p==q){
        return 1;
    }
    
 }

 int main(){

inputde();
diplayf(head);
// int h=lopp(head);
// cout<<endl<<h;

     return 0;
 }