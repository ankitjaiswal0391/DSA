#include<iostream>
using namespace std;
bool fun(char a[],int n){
    if(n==0||n==1){   // copy occurs only when input array is more then 3
        return true;

    }
    if(a[0]!=a[n-1])   // (!a[0]==a[n-1]) yh wale kaam nhi kr rha hi
    {return false;}
    bool b=fun(a+1,n-2);
    return b;
}
int main()
{int n;
cin>>n;
    char* a=new char[n];
    if(n%2==0){cout<<"false";}
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }

bool d=fun(a,n);
if(d){
    cout<<"true";
}else {cout<<"false";}
return 0;
}