#include<iostream>
using namespace std;
//MUST SEE KEYPAD STRING SUBSEQUENCE EXAMPLE AND KEYPAD_STRING NOTEBOOKS
int key(int n,string INPUT[],string op[]){ 
  if(n==0){
      op[0]=" ";
      return 1;
  }  
  int fd=n%10;
  string d = INPUT[fd];
  int t=d.size();
  int b=n/10;
  
  int f=key(b,INPUT,op);
 // int t=d.size(); BOTH CASE SAME RESULT
 for(int i=1;i<t;i++){ // here number of copy must be 1 less then size of last number index
     for(int j=0;j<f;j++){ //1 copy done by recursion that way other copy create by us 
op[j+i*f]=op[j];//      for next copy other than recursion copy
     }// not write op[j+i*f]=op[j]+d[i];
 }
static int k=0;
  for(int i=0;i<t;i++){   // here not write int =1 because d[0] have some element or isme recursion 
  // wale v operate krenge is liye copy wale s 1 jada hoga
     for(int j=0;j<f;j++){
op[k]=op[k]+d[i]; // yha pe op[0,1,2] change ho ja rhe hai thats why answer comes is difference
  ++k;   }// adding string element of last digit number
 }
 return t*f;}

int main()
{int n;
cout<<"enter the number  ";
cin>>n;
string op[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

string op2[100]=" ";

int z=key(n,op,op2);
cout<<z;
for(int p=0;p<z;p++){
cout<<op2[p]<<" ";} //for subsequence of given string


return 0;
}



