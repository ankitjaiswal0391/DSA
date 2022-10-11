#include<iostream>
using namespace std;
int fun(int a[],int n,int m){
    if(n==0){return 0;}  // here n means size of array..
int b=0;

    b=fun(a+1,n-1,m);
    if(a[0]==m){
        b++;}
      //  int q=fun(a+1,n-1,m);
        return b; // at last b==0 hi hoga na or alway try to return temprory variable in which 
        // recursion stored
    
//  here we also written return o;
}
int main()
{int m,n;
cin>>n;
int* a=new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>m;

int l=fun(a,n,m);
cout<<l;
return 0;
}