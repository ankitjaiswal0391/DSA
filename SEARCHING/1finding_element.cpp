#include<bits/stdc++.h>
using namespace std;
 
 int findi(int a[],int n,int k){
    int s=0;
    int l=n-1;
    while(s<l){
        int m=s+(l-s)/2;
        if(a[m]==k){
            return m;
        }
      else if(a[m]>a[0]){
            if(a[m]>k){
                l=m-1;
            }
            else
            s=m+1;
        }
        else
        {
            if(a[m]>k){
                l=m-1;
            }
            else
            s=m+1;
        }}
        return -1;
 }
 
 int main(){
    int arr[]={7,8,9,3,4,5};
    int n=6;
    int k=8;
    int p=findi(arr,n,k);
    cout<<p;
 return 0;
 }