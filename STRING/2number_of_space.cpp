#include<iostream>
using namespace std;

int main()
{char a[]="how are  you   ankit";
int i ;
int n=0;
for(i=0;i<a[i]!='\0';i++){
if(a[i]==' '){
    while(a[i+1]==a[i]){
        i++;
    }
    n++;
}
} 
cout<<n;
return 0;
}