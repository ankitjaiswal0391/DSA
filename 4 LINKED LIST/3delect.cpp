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
 {node* newnode=new node(d);
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

 node* delectpp(node* p,int in){
    if(in==0){
        p=p->link;
        return p;
    }
    else{
        node* tem=p;
        for(int i=0;i<in-1&&tem!=0;i++){
            tem=tem->link;
        }
        node*a=tem->link;
        node*b=a->link;
        tem->link=b;
        return p;
        // delect a;
    }
 }

 int main(){

inputde();
diplayf(head);
int n;
cout<<"\nenter the index number\n";
cin>>n;
node*k=delectpp(head,n);
diplayf(k);
     return 0;
 }