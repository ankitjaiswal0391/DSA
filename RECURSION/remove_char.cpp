#include<iostream>
using namespace std;
void remove(char s[],char x){
    if(s[0]=='\0')
    {
        return ;

    }
    if(s[0]!=x){    // only taking non matching character
       remove((s+1),x);  
    // return ;
    }
    else{ int i;
    for(i=1;s[i]!='\0';i++){
    s[i-1]=s[i];                    // shifting all element to left side
    }                     // if 1st index is matching then 1st index remove and 2nd index goes to 1st index
    s[i-1]=s[i];                   // it is for last digit = '\0' interchanges
                                   // rest all element sifting towRD LEFT OR LOWER INDEX
    remove(s,x);}
    
}
int main()
{char str[100];
char p;
cin>>str;
cin>>p;

remove(str,p);
cout<<str;
return 0;
}