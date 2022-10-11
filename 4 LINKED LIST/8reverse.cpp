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
 cout<<" enter the deta";
 cin>>d;
 while (d!=-1)
 {node*newnode=new node(d);
    if(head==0){
        head=newnode;

 }
 else{
    node*tem=head;
    while(tem->link!=0){
        tem=tem->link;

    }
    tem->link=newnode;
 }
    /* code */cin>>d;
 }return head;
 
 }
 void diplayf(node* p){
    while(p!=0){
    cout<<p->data<<" ";
    p=p->link;
 }}

 node* rev(node* p){
    node *a,*b,*c;
    
    a=p;
    b=0;
    c=0;
    while(a!=0){
        c=b;
        b=a;
        a=a->link;
    b->link=c;
    }
   //  a=b; // NOT P=A because a=0; and b= last element of linked list
    
    return b;
 }

 int main(){

inputde();
diplayf(head);
node *n=rev(head);
cout<<"\n";
diplayf(n);

     return 0;
 }