#include<iostream>
using namespace std;
// this method apply only for shorted array
int main()
{int a[11]={2,3,4,4,5,5,5,6,7,7,9,};
int i=0;
for(;i<10;i++){
if(a[i+1]==a[i]){int j=i+1;
    while(a[i]==a[j])
    {j++;
        
    }
    cout<<a[i]<<" number of times "<<j-i<<endl;
    i=j-1;
    
}
}
return 0;
}