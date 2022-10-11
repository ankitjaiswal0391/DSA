#include<iostream>
using namespace std;

int partion(int a[],int s,int e){
int x=s+1; // YH IS LIYE KI 1 INDEX PR KAM NHI KRNA HI AGAR KIYE TB EQUAL WALE CASE M INVALID HOGA
int i=0;
for(;x<=e;x++){              // i=0;{

                             //    } 
    if(a[s]>=a[x]){ // x!=0 thats why because we already tacking 1st digit
        i++ ;     //  it is index number
    }                 // we taking equal number in left side
}                               // int pi=i+s;
int pi=i+s;   // not used p=si+i because we already start from s;
swap(a[s],a[pi]);//SWAP IS PREDEFIND FUNCTION
int k=s;
int j=e;              
while(k<pi&&j>pi){

    while(a[k]<=a[pi]){
        k++;
    }
    
        while(a[j]>a[pi]){
            j--;
        }
    
   // while(k<pi&&j>pi)
    
if(a[k]>a[pi]&&a[j]<a[pi]) // SWAP CONDITION
{
   swap(a[k++],a[j--]); // predefind function
    
}

}

return pi;


}

void quick(int a[],int s, int e){
    if(s>=e)
    {
        return ;
    }
    int pi=partion(a,s,e);
    quick(a,s,pi-1); //SHORTING WALE KAM YH APNE S KR DENGE ISKINTENSION HME NHI LENA HI
    quick(a,pi+1,e); //RECURSION BREAK SMALL TO SMALL INT ARRAY THEN BACK SHORTING THE 
    // FORM SMALLER TO HIGHER THEN FULLY SHORTING ALL INT ARRAY
}
int main()
{int a[6]={9,8,7,10,5,3};

int n=6;
quick(a,0,n-1);
for(int j=0;j<n;j++){
    cout<<a[j]<<" ";
}

return 0;
}