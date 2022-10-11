#include<iostream>
using namespace std;
int k=0;
void printkey(int n,string ip[],string op){
    if(n==0){
        cout<<op<<"\n";
       // return ;
    }               //MUST BE DRY ONE TIME IN NOTE BOOK
      int k=n%10;
    
    string g=ip[k];

    for(int i=0;i<g.size();i++){
    printkey(n/10,ip,g[i]+op);} //jo v output aayiga wha aagle upcomig output m add ho jaiyga 
    // number of times g index added
    }
void key(int n){
    string op="";
    string in[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    printkey(n,in,op);
}
int main(){
int n;
cout<<"enter the number     ";
cin>>n;
key(n); return 0;} //
 