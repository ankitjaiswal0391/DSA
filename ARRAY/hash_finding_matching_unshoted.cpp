#include<iostream>
using namespace std;
//this method apply for shorted and unsorted array 
int main()
{int a[10]={1,3,3,5,5,7,8,5,4,10}; 
int h[11]={0};
for(int i=0;i<10;i++){
    h[a[i]]++;
}
for(int i=1;i<=10;i++)
if(h[i]>1)cout<<i<<"number of times "<<h[i]<<"\n";
return 0;
}