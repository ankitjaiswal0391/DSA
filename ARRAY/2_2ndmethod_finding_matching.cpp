#include<iostream>
using namespace std;
// 2nd method to finding 
// T=0(n2)   so it is slow process 
int main()
{int a[10]={8,3,6,3,6,3,6,3,2,7};
for(int i=0;i<10;i++){
    int p=1;
    //int duplicate=0;
    for(int j=i+1;j<10;j++){
        if(a[i]==a[j]&&a[i]!=0)//a[i]==0 its means it is already used its is matching already used
       {    // its used to skip the further matching element
            p++;
            
           a[j]=0;         // generall used any value number  means not matching when again come same number in future
            
        }
    }
    if(p>1){
        cout<<a[i]<<"number of time "<<p<<endl;
    }
}
return 0;
}