#include<bits/stdc++.h>
using namespace std;
// #include "node.cpp"
 class node{
public:
int data;
node *link;
node* pv;
node(int d){
    data=d;
    link=0;
    pv=0;
}
 };
 node* head=nullptr;
 node* inputde()
 {int d;
 node* tail=0;
 node* pri=0;    // node* tail=head;
 cout<<" enter the deta";
 cin>>d;
 while (d!=-1)
 {node*newnode=new node(d);
    if(head==0){
        head=newnode;
        tail=newnode;
        pri=tail;
         // second pointer used to pointing last node of LL

 }
 else{  // here als0 used while loop but which take high t(0) that why used 2nd pointer method ex lst;
    tail->link=newnode; // FOR FORWARD 
    tail=newnode;
    tail->pv=pri->link;// FOR BACKWARD
 }
    /* code */cin>>d;
 }return head;
 
 }
 void diplayf(node* p){
    while(p!=0){
    cout<<p->data<<" ";
    p=p->link;
 }}
 node* DELECTN(node* head,int p){
    if(p==0){
        
           node* f=head->link;
           f->pv=0;
           delete head;
           head=f;
        }
        else{
            node* hd=head;
            for(int i=1;i<p;i++){
                hd=hd->link;
            }
            hd->pv->link=hd->link;
            hd->link->pv=hd->pv;
        
        
        }
        return head;

    }
 

 int main(){

inputde();
diplayf(head);
cout<<"\nenter position and data of insert node\n";
int p;
cin>>p;
node* L=DELECTN(head,p);
diplayf(L);

     return 0;
 }