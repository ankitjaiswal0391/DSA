#include<iostream>
using namespace std;
int fun(int a[],int n, int m){
    if(n==0){
        return -1;   //this can identify form base in which n==(n-1)th index of array
        
    }
    static int p=n;
  // int p=fun(a+1,n-1,m); //here also u can write
 if(a[0]==m){return p-n;
      // it is work as base case but it is not base case
fun(a+1,n-1,m); //here also u can write
 
 } //we go from left to then not required check 1st index 
 /*int p=fun(a+1,n-1,m); //here also u can write
     
  if(p==-1){
      return p;
  } else
   return p+1;*/

}
int main()
{ int n,x;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int d=fun(a,n,x);
    cout<<"index number of array is:"<<d;
    delete[]a;
return 0;
}