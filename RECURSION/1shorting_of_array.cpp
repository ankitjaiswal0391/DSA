#include<iostream>
using namespace std;
bool fun(int a[],int n){
    if(n==1||n==0){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    //return(fun(a+1,n-1));   //***** we can direct write this
    bool ss=fun(a+1,n-1);   //*****
        if(ss)
        {return true;}
        else
        { return false;}
    }

int main()
{int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
bool m=fun(a,n);
cout<<m;
return 0;
}