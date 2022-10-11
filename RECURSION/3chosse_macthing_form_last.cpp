#include<iostream>
using namespace std;   //this is counting form last

int fun(int a[],int n,int x){

    if(n==0){return -1;}
    if(a[n]==x){
        return n;
    }

    int c=fun(a,n-1,x);
    if(c==-1){
        //if(a[0]==x)  // in method the tracking form right to left in array that way we
    // must check for a[0]th element of array..
    //{
      //  return 0;
    //}
  //  else
     return -1;// if a[0] not match ..
    }//else 
    return c;
}
int main(){
    int n,x;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    int d=fun(a,n,x);
    cout<<"index number of array is:"<<d;
return 0;
}