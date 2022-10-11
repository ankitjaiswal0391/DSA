#include<iostream>
#include<cmath>
using namespace std;
float fun(int m){
    if(m==0){return 1;}
    float b=fun(m-1);
    b=b+1/pow(2,m);  //last element which sum at last =1/2(pow)m;
    return b;
}
int main()
{int m;
cin>>m;
cout<<fun(m);
return 0;
}