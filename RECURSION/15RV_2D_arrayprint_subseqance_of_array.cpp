#include<iostream>
using namespace std;
void print(int ip[],int n,int op[],int s){
    if(n==0){for(int i=0;i<s;i++){
        cout<<op[i]<<" ";
       }
       cout<<endl;
        return;
    }
    int nop[s+1];
    int g;
    for(g=0;g<s;g++){
        nop[g]=op[g];
    }
    nop[s]=ip[0];
    print(ip+1,n-1,nop,s+1);
    print(ip+1,n-1,op,s);
    
            return;

}
void print1(int ip[],int n){
    
    int op[10];
  // op[0]==0;
    
    int m=0;
    print(ip,n,op,m);

}
int main()
{int l;
cin>>l;
int ip[l];
for(int i=0;i<l;i++){
    cin>>ip[i]; 
}
print1(ip,l);
return 0;
}