#include<bits/stdc++.h>
using namespace std;
 
 
 int main(){
int a[6]={1,3,4,5,6};
int b[5]={2,3,4,7,9};
int c[6];
//cout<<sizeof(c)/4<<endl;

int i=0,j=0,k=0;
while (i<6&&j<6)
{
    if(a[i]==b[j]){
        i++;
        j++;
    }
    if(a[i]>b[j]){j++;} // if we sifting this line to 24 then we must decrease value of k by 1 because k work 1 time than 
    // actual required
    if(a[i]<b[j]){
        c[k++]=a[i];
    i++;

    }
    /* code */
}
for(;i<6;i++){
    c[k++]=a[i];// here i=5
}cout<<k<<"\n";
for(int r=0;r<k-1;r++){  // number of times loop run=length of matching array which is equal to total a index - b matching a
// index
    cout<<c[r]<<"  ";
}
//cout<<endl<<a[6];
     return 0;
 }