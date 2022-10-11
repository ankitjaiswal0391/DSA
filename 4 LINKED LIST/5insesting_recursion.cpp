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

node* inst(node* p,int in ,int d){
    node*newnode=new node(d);
    if(in==0){
        newnode->link=p;
        p=newnode;
        return p;
    }
    node* k=inst(p->link,in-1,d);//ASSUME LONG PART DONE BY RECURSION
p->link=k; // HERE P BEHAVE LIKE 1ST ELEMENT
return p;
}
 int main(){

inputde();
diplayf(head);
int in,d;
cout<<"\nenter the index and data\n";
cin>>in>>d;
node* l=inst(head,in,d);
diplayf(l);

     return 0;
 }