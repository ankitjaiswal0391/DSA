#include<iostream>
using namespace std;

int main()
{char a[]="decimaldp";
char b[]="medicdld";

//char b[]="medicpl";
int h[26]={0};
int i;
for(i=0;a[i]!='\0';i++){
    h[a[i]-97]++;

}
for(i=0;b[i]!='\0';i++)
if(h[b[i]-97]==0){
    cout<<"not anangram";
    break;
}
if(b[i]=='\0'){
    cout<<"yes it is anangram";
}
return 0;
}
