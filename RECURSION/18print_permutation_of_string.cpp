#include<bits/stdc++.h>
using namespace std;
void swap(char* p,char* q){
    char k;
    *p=k;
    k=*q;
    *q=*p;
}
 void permutation(char *s,int i,int n){
    if(i==n){
        cout<<s<<endl;
        return ;
    }int j;
    for(j=i;j<n;i++){
        swap((s+i),(s+j));
        permutation(s,i+1,n);
        swap((s+i),(s+j));

    }}
 
 
 int main(){
char s[3];
int n;
cin>>n;

cin>>s;
permutation(s,0,n-1);


     return 0;
 }