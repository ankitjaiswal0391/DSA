#include<bits/stdc++.h>
using namespace std;
 int binary_search(int a[],int s,int n,int k){
     // int n=n-1;
     int t=-1;
     while(s<=n){

     int m=s+(n-s)/2;
 
     if(k==a[m]){
         t=m;
         n=m-1;
 
     }
     else if(k<a[m]){
         n=m-1;
     }
     else
    { s=m+1;}
     // m=(n-s)/2;
  }
  return t;}
  
 int main(){

int a[]={1,3, 5, 5, 5, 5, 7, 123, 125};
int n=(sizeof(a)/sizeof(int));
int k;
cout<<"enter the number";



cin>>k;
int p=binary_search(a,0,n-1,k);
cout<<"postion of number is ="<<p;
     return 0;
 }