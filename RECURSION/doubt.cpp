#include<iostream>
using namespace std;

int main()
{int a[20][2]={{1,2},{3,4}};
int b[3][2]={a[0][0],a[1][0]};
cout<<b[0][0]; 
b[0][0]=97;
cout<<"\n"<<"size"<<sizeof(a[0])/4;
cout<< a[1][1]; 
char p[100][2];
//char p[0][0]=b[0][0];
cout<<"p  "<<p[0][0];


return 0;
}
