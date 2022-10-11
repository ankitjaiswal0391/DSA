#include<iostream>
using namespace std;

int main()
{char s[7]="banana";
int h[14]={0}; //used for space complexity position of n in alfabet is 14
int i;
for(i=0;s[i]!='\0';i++){
    h[(s[i])-97]++;
}
for(i=0;i<14;i++)
if(h[i]>1){
    cout<<h[i]<<" number "<<char(i+97)<<endl;  //char(i) type changing


}

return 0;
}