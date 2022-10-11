#include<bits/stdc++.h>
using namespace std;

 class loweer{
     public:
     int n;
     int a[];   // in class alway dynamic array used
     loweer(int b[],int p){
         n=p;
         for(int i=0;i<n*(n+1)/2;i++){
             a[i]=b[i];
         }
     }
     void get(){
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 if(i>=j){
                     cout<<a[i+j]<<" ";
                 }else
                 cout<<"0 ";

             }
             cout<<endl;
         }
     }
 };
 
 int main(){
     int n;
     cin>>n;
int a[(n*(n+1))/2];
for(int i=0;i<n*(n+1)/2;i++){
    cin>>a[i];
    
}
loweer l(a,n);
l.get();



     return 0;
 }