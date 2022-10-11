#include<iostream>
using namespace std;

int main()
{int a[5]={1,3,4,5,8};
int k=0;

for(int i=1;i<=a[4];i++){
    if(i!=a[k++]){
        cout<<i;
        k--;
    }
}
return 0;
}
