#include<iostream>
using namespace std;
bool fun(int a[],int n,int s){



    if(n==0){return false;}
    if(a[0]==s){return true;}  // this line can also change with lower line
    bool a1=fun(a+1,n-1,s);   //****
    return a1;
}

int main()
{int n;
cin>>n;
int*a=new int[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int k;
cin>>k;
bool m=fun(a,n,k);
if(m){cout<<"true";}
else{cout<<"false";}
return 0;
}