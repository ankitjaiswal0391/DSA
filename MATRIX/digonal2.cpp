#include<bits/stdc++.h>
using namespace std;
 void fun(int a1[],int s){
for(int i=0;i<s;i++){
for(int j=0;j<s;j++){
    if(i==j){
        cout<<a1[i];
    }
    else 
    cout<<"0";
}cout<<endl;
}
 }
 
 int main(){
int a1[5];
for(int i=0;i<5;i++){
    cin>> a1[i];
}
fun(a1,5);

     return 0;
 }