#include<iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int s1=fun(n-1);
    int s2=fun(n-2);
    return s1+s2;
}
int main()
{int n;
cin>>n;
cout<<fun(n);
return 0;
}