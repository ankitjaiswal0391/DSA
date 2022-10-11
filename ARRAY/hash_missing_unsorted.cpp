#include<iostream>
using namespace std;

int main()
{int a[10]={1,5,4,6,7,8,9,10,13,14};
int h[14]={0};  //creating new element of size a[max]
int i;
for(i=0;i<=10;i++)
{
    h[a[i]]++;
}
for(i=1;i<=14;i++){
    if(h[i]==0)cout<<i;
}
return 0;
}