#include<bits/stdc++.h>
using namespace std;

int main()
{array<int,10> a{2,3,4,5,7,6,8,9,10,11};
int max,min;
    max=a[0];min=a[0]; /// first initialised 1st element
for(int i=0;i<10;i++){
    if(max<a[i+1]){
        max=a[i+1];
    }
    if(min>a[i+1]){
        min=a[i+1];
    }
}
cout<<"maximum= "<<max<<" and  minimum "<<min<<endl;
return 0;
}