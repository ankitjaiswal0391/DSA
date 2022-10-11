#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//MUST SEE KEYPAD STRING SUBSEQUENCE EXAMPLE AND KEYPAD_STRING NOTEBOOKS
int key(int n,string input[],string op[]){ 
vector<string>og;
  if(n==0){
      op[0]=" ";
      return 1;
  }  
  int fd=n%10;
  string d=input[fd];
  int t=d.size();
  int f=key(n/10,input,op);
 // int t=d.size(); BOTH CASE SAME RESULT
 // static int i=0;
  //for(;i<f;i++){
    //  og[i]=op[i]+d[0];
  //}
 /*static int j=0;
  for(;j<f;j++){
og[i+j]=op[j]+d[1];
  }
  static int l=0;
  for(;l<f;l++)
  {
og[i+j+l]=op[l]+d[2];
  }
  */for(int i=0;i<=t;i++){ // for there copy done in 3 times or t.size() times
    for(int j=0;j<f;j++){       // jo op aaiyga usme 1index ka kohi role nhi hoga isliye we ha
                             //we have to add from 1st index of output with 1st index of input
      // og[j+i*f]=op[j]+d[i];
      // op[j+(i+1)*f]=op[j]+d[i] not write because older wale part update nhi honge  it also get same out put like keypad_note string example
   og.push_back(op[j]+d[i]);
    }
  }
 
 for(int q=0;q<t*f;q++){
     op[q]=og[q];//👀 vector m copy nhi hota pr vector kisi m v copy ho jata hai or cout v string jaisa km krta hai
   }
  return t*f;
  
    

  
  

}

int main()
{int n;
cout<<"enter the number     ";
cin>>n;
string op[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
string op2[100];

int z=key(n,op,op2);
cout<<z;
for(int p=0;p<z;p++){
                                cout<<op2[p]<<" ";}
                                return 0;} //
 