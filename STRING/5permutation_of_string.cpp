#include<iostream>
#include<bits/stdc++.h>
using namespace std;// STRING METHOD
// void swp(c/\har* p,char* q){
// char t;
    // t=*p;/
    // *p=*q;
    // *q=t;

// }
void per(char s[],int i,int n)
//void per(char s,int i,int n) or not used void per(char s[],int i,int n) because it is not not array it  is string
{
    int j;
    if(i==n)
     {  cout<<s;     // not using loop because string can read all input at a time
        cout<<endl;} 
    else
   { for(j=i;j<=n;j++){
        swap(s[i],s[j]);
        per(s,i+1,n);
        swap(s[j],s[i]); //back trackking for getting original string " abc".

    }}

}
int main()
{char s[]="abc";
int i=0;
int n=2;
per(s,i,n);


return 0;
}