#include<iostream>
using namespace std;
void fun(char s[],char y,char x){
    if(s[0]=='\0'){
        return ;
    }
    if(s[0]==y){s[0]=x; }  // not written (s[0]=='y')because we pass as argument in function
            return fun(s+1,y,x);}
            
int main()
{char str[29];
cin.getline(str,29);
char y,x;
cin>>y>>x;
fun(str,y,x);
//char c[30]=cpy(fun(str,y,x));
cout<<str;
return 0;
}