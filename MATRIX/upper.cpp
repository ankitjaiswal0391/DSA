#include<bits/stdc++.h>
using namespace std;
 class upper{
     public:
     int n;
     int *a;
     upper(int p){
         n=p;
         a=new int[n*(n+1)/2];
     }
     void set(int b[],int x){
         n=x;
         for(int i=0;i<n*(n+1)/2;i++){
             {
         {
         a[i]=b[i];

         }
         
     }}}
void show(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                cout<<a[i+j];}
            else
            cout<<"0";   
               
            
        }
        cout<<endl;
    }}


 };
 
 int main(){int n;
 cin>>n;
 int x;
 upper u1(n);
 int a[n*(n+1)/2];
 cout<<"enter the element of matrix";
 for(int i=0;i<n*(n+1)/2;i++){
     
         cin>>a[i];
         
             
         }
         u1.set(a,n);
     
 
     u1.show();



     return 0;
 }