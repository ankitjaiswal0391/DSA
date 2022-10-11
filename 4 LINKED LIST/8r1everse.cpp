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
 }
 return head;
 
 }
 void diplayf(node* h){
   node* p=h;
    while(p!=0){
    cout<<p->data<<" ";
    p=p->link;
 }}

 node* rev(node* q)
 { if (q==0||q->link==0){
   return q;
 }
    node* c=q;
    node* p=0;
    node* n=0;// n=nxt , p=previous ,c =current
    
   //  c=q;
   //  p=0;
   //  n=0;
    while(c!=0){
    n=c->link;

    c->link=p;
   //  n->link=c;
    p=c;
    c=n; // yha v to nhi mallom chl rha hai ki kaise last wale null ko point kr rhe hai but intail m hi kr de rhe hai

    }
 // NOT P=A because a=0; and b= last element of linked list
    
    return p;
 }

 int main(){

inputde();
diplayf(head);
// cout<<"\n enter the number at which you want to reverse";
// int n;
// cin>>n;// it is for kitna tk recursion kra hai

node *m=rev(head);
cout<<"\n";
diplayf(m);

     return 0;
 }