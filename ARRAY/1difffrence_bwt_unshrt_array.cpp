#include<bits/stdc++.h>
using namespace std;
 
 
 int main(){/*
 
int a[4]={3,1,2,6};
int b[4]={4,8,2,5};
int c[7]={0}; // if 
for(int i=0;i<4;i++){
    ++c[a[i]];
   // cout<<"a part"<<c[a[i]-1]<<endl;
}
for(int i=0;i<4;i++){
    ++c[b[i]];
   // cout<<c[b[i]]<<endl;
}
for(int i=0;i<20;i++){
    if(c[i]==1){
        cout<<i;
    }
}}*/

int a[4]={3,1,2,6};
int b[4]={4,8,2,5};
int c[7]={0};
int k=0;
for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){if(a[i]==b[j]){
     //j++;
      i++;
    }
      else  if(a[i]!=b[j]&&j==3){   // here j=3 for checking all index of b 
            c[k++]=a[i];
        }
    }
    }
    for(int i=0;i<k;i++){
        cout<<c[i];
    }


      return 0;}
// array<int,5> a1={2,3,4,5,6};
 //array<int,5> a2{3,4,5,6,7};
 //int a3[5];
 //a3=a2+a1;*/