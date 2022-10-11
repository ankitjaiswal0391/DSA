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
//  node* head=nullptr;
 node* inputde(node* head)
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
    tail=newnode;
 }
    /* code */cin>>d;
 }return head;
 
 }


 void diplayf(node* p){
    while(p!=0){
    cout<<p->data<<" ";
    p=p->link;
 }}

 node* first=0;
 

node* snd=0;


 node* mergin(node* u,node* m){
    node* lst;
    node* t=lst;
    node* y= u;
    node* z=m;
    // node* p=t;
    // first=u;
    // snd=m;
    if(y->data<z->data){
        t=y;
        lst=y;
      y = y->link;
        lst->link=0;
    }
    else{
        t=z;
        lst=z;
        // z->link;
        z=z->link;
        lst->link=0;
    }
    while(z!=0&&y!=0){
    if(y->data<=z->data){
      
        lst->link=y;
        lst=y;
        y=y->link;
        lst->link=0;

    }
    else{
        lst->link=z;
        lst=z;
        z=z->link;
        lst->link=0;

    }
 }
 if(z!=0){
   lst->link=z;
   
 }else 
   lst->link=y;
 
 return t;}

node* findmid(node* l){
    node* sl=l;
    node* ft=l->link;
    while (ft!=0&&ft->link!=0)
    {sl=sl->link;
    ft=(ft->link)->link;
        /* code */
    }
    return sl;
    
}


 node* mergi(node* u)
{if(u==0||u->link==0)
  {
    return u;
  } 
   node* m=findmid(u);
    node* r=m->link;
//    cout<<m->data<<endl;
m->link=0;
    
    node* ll=u;
     ll=mergi(ll);
     r=mergi(r);

    node* p=mergin(ll,r);
    return p;
}


 int main(){

node* u=inputde(first);

diplayf(u);
cout<<endl;
// node* t=inputde(snd);
// diplayf(t);
node* z=mergi(u);

cout<<endl;
diplayf(z);

     return 0;
 }