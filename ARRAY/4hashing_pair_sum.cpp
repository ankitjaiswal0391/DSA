#include<iostream>
using namespace std;
//THIS METHOD ALSO APPLY FOR SHORTED ARRAY AND UNSORTED ARRAY
int main()
{int a[10]={2,3,4,5,6,7,8,10,14,13};
int k=10;
int h[14]={0};
int j=9;
for(int i=0;i<10&&j>0;i++){
  
    
  h[a[i]]++;
  //  if(h[k-a[i]]!=0&&(k-a[i]>0&&k-a[i]!=a[i])){ //if L_10 work and not work then this statemen used 
   //if(h[k-a[i]]!=0&&(k-a[i]>0)){ // we must used && condition for get only + value
     //if(h[k-a[i]]>0){ this satemant note work
if(h[a[i]]==1&&h[k-a[i]]==1){



        cout<<a[i]<<" "<<k-a[i]<<endl;

     
    // h[a[i]]++;
    }
      
}
return 0;//T(0)=n;
}
