#include<iostream>
using namespace std;
int main()
{int a[10]={3,6,8,8,10,12,15,15,15,20};
for(int i=0;i<=9;i++){
    int k=a[i];
    int p=0;
    for(int j=i+1;j<=9;j++){
        if(k==a[j]){
            p++;
            cout<<a[i]<<" ";
            i++;
            break;
            
        }
    }
}return 0;
}