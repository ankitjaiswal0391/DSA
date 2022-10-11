#include<iostream>
using namespace std;// ARRAY METHOD
void swp(int* p,int* q){
int t;
    t=*p;
    *p=*q;
    *q=t;

}
void per(int s[],int i,int n) // here we used because it is array not a string
{
    int j;
    if(i==n)
       {for(int v=0;v<=n;v++){ // loop only for reading all input at a time
        cout<<s[v];}
        cout<<endl;} // endl in outer side because string length 3 so after 3 time repetition
    // its must change line
    else
   { for(j=i;j<=n;j++){
        swp(&s[i],&s[j]);
        per(s,i+1,n);
        swp(&s[j],&s[i]); //back trackking for getting original string " abc".

    }}

}

int main()
{int s[]={1,2,3};
int i=0;
int n=2;
per(s,i,n);


return 0;
}