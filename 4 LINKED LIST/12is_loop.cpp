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
    tail->link=head->link;
 return head;
 
 }
 void diplayf(node* p){
    while(p!=0){
    cout<<p->data<<" ";
    p=p->link;
    if(p->data=head->data){
        break ;
    }
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
    
        /* code */}
    
    if(p==q){
        return 1;
    }
    
 }

 int main(){

inputde();
// diplayf(head);
int h=lopp(head);
cout<<endl<<h;

     return 0;
 }