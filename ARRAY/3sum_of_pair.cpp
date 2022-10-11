#include<bits/stdc++.h>
using namespace std;
 
 
 int main(){
int a[6]={2,3,4,6,7,8};
int k=14;
for(int i=0;i<6;i++){
    for(int j=0;j<6;j++){
        if(a[i]+a[j]==k){
            
            
            cout<<a[i]<<" and "<<a[j]<<endl;
            a[j]=0;       // for further not repetating
        }
    }
}

     return 0;
 }// T(0)=n*n;