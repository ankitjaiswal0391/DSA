#include<iostream>
using namespace std;
int d=1;
int fact(int n){
   // cout<<d<<endl;
    if(n>0){
        d=d*n; //value of d is same for all function but not for n because n is difference for  
        fact(n-1);//difference for difference function
       // cout<<fact(n-1);
        return d;  //this return to same function for recursion
    }// written return d there both give same result but difference way
    
}

int main()

{int a;
cout<<"enter the number";
cin>>a;
//fact(a);
int f=fact(a);
cout<<"factorial of number is"<<f;
return 0;
}