#include<bits/stdc++.h>
using namespace std;
 
 
 int main(){
int a[5]={2,2,3,4,4};
int b[5]={0};  // size of array must be 1 more then the a[i]= max
for(int i=0;i<=4;i++){
    b[a[i]]++;
}
for(int i=1;i<=4;i++){
    if(b[i]>=2){
        cout<<"this number "<<i<<" repeated "<<b[i]<<"times\n";
    }
}

     return 0;
 }