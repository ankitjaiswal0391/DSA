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
 node* tail=0;    // node* tail=head;
 cout<<" enter the deta";
 cin>>d;
 while (d!=-1)
 {node*newnode=new node(d);
    if(head==0){
        head=newnode;
        tail=newnode; // second pointer used to pointing last node of LL

 }
 else{  // here als0 used while loop but which take high t(0) that why used 2nd pointer method ex lst;
    tail->link=newnode;
    tail=newnode;
 }
    /* code */cin>>d;
 }return head;
 
 }

node* kreverse(node* hd,int k){
    if(hd==0){
        return 0;
    }
    node* cur=hd;
    
    node* pri=0;
    node* nxt=0;
    int c=0;
while (cur!=0&&k>c){
    nxt=cur->link;
    cur->link=pri;
    pri=cur;
    cur=nxt;
    c++;

if(nxt!=0){
    head->link=kreverse(nxt,k);
}}
return pri;

}


 
 void diplayf(node* ph){node* p=ph;
    while(p!=0){
    cout<<p->data<<" ";
    p=p->link;
 }}

 int main(){

inputde();
diplayf(head);
int k;
cout<<"\nwrite the size of group required to reverse\n ";
cin>>k;
node* r=kreverse(head,k);
diplayf(r);

     return 0;
 }