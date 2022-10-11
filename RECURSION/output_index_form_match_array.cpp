#include<iostream>
using namespace std;
int fun(int a[],int n,int x,int op[]){
    if(n==0){           // at size of array =0 there is no stored any data in output array
        return 0; //for array size =0 size of output =0;or 1 v jagah x ka value nhi mila
    }
    int b=fun(a,n-1,x,op);//isk phle wale sara kam recursion kr dega jaise output m kya kya
   //  stored hoga ,output ka size v return krdega then last wale element ko hme kude s 
   // krna padega agar a[last element]==x,then output m stored krna pdega or out put ka size 
    // v pdhana pdega
    if(a[n-1]==x){  
        op[b]=n-1; // here n-1 give index of array or n== size of array 
        b++;      // here size of output array also increase..
    }
    return b;// here b give size of output or kinte bar x ka value mila
    
    }

void pp(int a[],int n,int x){
    int op[n];
    int c=fun(a,n,x,op);
    for(int i=0;i<c;i++){
        cout<<op[i]<<" ";
    }
}
int main()
{int n,x;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>x;
    pp(a,n,x);
    delete[]a;
return 0;
}