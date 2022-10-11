#include<bits/stdc++.h>
using namespace std;
 int fun(int a[],int n,int m,int num[]){
     if(n==0){
         return 0;
     }
     int d=fun(a,n-1,m,num);
     if(a[n-1]==m){
         num[d++]=n-1;
         
     }
     return d;
 }
 void index(int a[],int n,int m){
int num[n]={0};
     int p=fun(a,n,m,num);
     for(int i=0;i<p;i++){
         cout<<num[i]<<" ";
     }
 }
 
 int main(){
int n,m;
//vector<int> a;
cin>>n;
int *a=new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    
}
cin>>m;
index(a,n,m);

     return 0;
 }