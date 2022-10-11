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
 node* insertionN(node* head,int p,int d){
    if(p==0){
        
            node* nn=new node(d);
            nn->link=head;
            head=nn;
            return head;
        }
        else{
        node* s=head;
        node* nn=new node(d);
        for(int i=1;i<p;p++){
        s=s->link;  }  

        nn->pv=s;
        nn->link=s->link;
        if(s->link){

        s->link->pv=nn;
        }
        s->link=nn;
        }
        return head;

    }
 

 int main(){

inputde();
diplayf(head);
cout<<"\nenter position and data of insert node\n";
int p,d;
cin>>p>>d;
node* L=insertionN(head,p,d);
diplayf(L);

     return 0;
 }