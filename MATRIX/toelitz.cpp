#include<bits/stdc++.h>
using namespace std;
 class symmetry{ // this code valid only for n=4 only not for less then or more then 4
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
            if(i-j==0){cout<<a[i-j];}
            else if(i-j==-1)
           { cout<<a[j-i];
        }else if(i-j==-2){
cout<<a[j-i];
        }
        else if(i-j==-3){ cout<<a[j-i];}
        else if(i-j==1){cout<<a[i-j+3];}
        else if(i-j==2){
            cout<<a[i-j+3];

        }
        else if(i-j==3){cout<<a[i-j+3];}
        else if(i==j){ cout<<a[0];}



        }
        cout<<endl;
    }
}

 };
 
 int main(){
int n;
cin>>n;
int a[2*n-1];
for(int i=0;i<2*n-1;i++){
    cin>>a[i];
}
symmetry s1(a,n);
s1.show();
return 0;}