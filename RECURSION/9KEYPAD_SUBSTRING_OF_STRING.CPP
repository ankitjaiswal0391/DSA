#include<iostream>
using namespace std; //MUST SEE KEYPAD STRING SUBSEQUENCE EXAMPLE AND KEYPAD_STRING NOTEBOOK
int key(int n,string input[],string op[]){
  if(n==0){
      op[0]=" ";
      return 1;
  }  
 static int k=0;
  int fd=n%10;
  string d=input[fd];
  
  int t=d.size();
  int f=key(n/10,input,op);

 //cout<<" f="<<f;
  for(int i=0;i<t;i++){
      for(int j=0;j<f;j++){
op[k++]=op[j]+d[i];// this GIVE NOT CORRECT ANSWER BECAUSE OP CHANGES FROM 0 TO T VALUE
      }}
return t*f;}  // K give total number of string formed by number N
            // d*f give total number of substring of length 2


int main()
{int n;
cout<<"enter the number     ";
cin>>n;
string op[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string op2[200];

int z=key(n,op,op2);
cout<<z;
for(int p=0;p<z;p++){
                                cout<<op2[p]<<" ";} //for subsequence of given string


return 0;
}