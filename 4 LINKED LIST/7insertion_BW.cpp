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



node* insert(node*j,int in,int d){
    node*newnode=new node(d); //INSERTION CODE 
    node* tem=j;
    if(in==0){// ONLY FOR VALIDINFG FOR IF ADDING IN FIRST 
        newnode->link=head;
        head=newnode;
        return j;
    }
    for(int i=0;i<in-1&&tem!=0;i++){ // TEM!=0 CONDITION FOR PROPER WORKING IN USER INPUT IS GREATER THEN THEN LENGTH OF
                                              // LINKEDLIST
        tem=tem->link;
    }if(tem!=0){
    newnode->link=tem->link;
    tem->link=newnode;}
    return j;
}





 int main(){

inputde();
diplayf(head);
int n,d;
cout<<"\nenter number and index number\n";
cin>>n>>d;
node* k=insert(head,n,d);
diplayf(k);


     return 0;
 }