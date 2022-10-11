#include<iostream>
using namespace std;
int fun(int a[],int n){
    if(n==1){
        return a[0];

    }//int a1=a[0];
    int a2=fun(a+1,n-1);  //I.H
    return   a[0]+a2;       //       a2+a1;//I.S
}
int main()
{int a[5]={1,2,3,4,5};
int c=fun(a,5);
cout<<c;
return 0;
}