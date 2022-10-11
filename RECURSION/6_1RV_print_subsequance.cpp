#include<iostream>
using namespace std;
void printsub(string input,string output){
    if(input.length()==0)
{
    cout<<output<<"\n";
    return;
}
printsub(input.substr(1),output);
printsub(input.substr(1),input[0]+output);}
int main()
{string s1;
cin>>s1;
string op=" ";
printsub(s1,op);
return 0;
}