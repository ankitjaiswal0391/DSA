#include<bits/stdc++.h>
using namespace std;
 
 
 int main(){
array<int,5> a{2,3,4,5,6}; // try to used this form or vector form of array because many function present in libreray
int i=0;
int j=4;
while(i!=j){
    if(a[i]+a[j]<10){
i++;
    }
    if(a[i]+a[j]>10){
        j++;
    }
    if(a[i]+a[j]==10){
        cout<<a[i]<<" and "<<a[j]<<endl;
        j--;i++;
    }
}

     return 0;
 }