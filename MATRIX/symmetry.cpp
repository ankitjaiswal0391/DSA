#include<bits/stdc++.h>
using namespace std;
 class symmetry{
     int n;
     int a[];
     public:
symmetry(int b[],int p){n=p;
for(int i=0;i<2*n-1;i++){
a[i]=b[i];
}
    
}
void show(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){cout<<a[i+j];}else
            cout<<a[i+j];
        }cout<<endl;
    }
}

 };
 
 int main(){
int n;
cin>>n;
int a[n*(n+1)/2];
for(int i=0;i<2*n-1;i++){ // for symmetry total 2*n-1 space required
    cin>>a[i];

}
symmetry s(a,n);
s.show();

     return 0;
 }