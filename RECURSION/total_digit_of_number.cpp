#include<iostream>
using namespace std;
int b=0566;
int fun(int n){
    if(n>0){
        int i=n/10;
        
        
        n=i;
        
        b++;
        fun(n);
        return b;

    }
}
int main()
{int n;
cin>>n;
int p=fun(n);
cout<<p;
return 0;
}