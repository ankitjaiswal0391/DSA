#include<iostream>
using namespace std;
int fun(int n,int m){
    int a=n;
    if(m==1){return n;}
    int c=fun(n,m-1);// recursion give c=n*m-1;; we assume this
    c=c+a;// c=c+n;
    return c;
}
int main()
{int n,m;
cout<<"enter the number";
cin>>n>>m;
cout<<fun(n,m);
return 0;
}