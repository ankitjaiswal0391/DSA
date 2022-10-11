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



void rev(node* p,node*q){
    if(p!=0){
        
        rev(p->link,p);

    p->link=q;
    }
else{head=q;}
}



 int main(){

inputde();
diplayf(head);
node* q=0;
rev(head,q);
// diplayf(k);
cout<<"\n";
diplayf(head);
     return 0;
 }