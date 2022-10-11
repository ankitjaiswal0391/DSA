#include<bits/stdc++.h>
using namespace std;
 class diagonal{
     public:
     int n;
     int a[];
     diagonal(int b[],int m ){
        n=m;
        for(int i=0;i<n;i++){
            a[i]=b[i];

        }
     }
     void get(){
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){

                 if(i==j){
             cout<<a[i];}
             else 
             cout<<" 0 ";
         }
         cout<<endl;}

     }

 };
 int main(){
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }    
 diagonal d1(a,n);
 d1.get();



     return 0;
 }