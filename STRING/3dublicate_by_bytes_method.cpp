#include<iostream>
using namespace std;

int main()
{char s[]="finding";
long int h=0,x=1;
for(int i=0;s[i]!='\0';i++){
    x=x<(s[i]-97);
    if(x&h>0)
      {  cout<<s[i];}    
        else
        h=h||x;
}

return 0;
}