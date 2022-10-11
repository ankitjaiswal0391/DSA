int binary_search(int a[],int s,int n,int k){
    // int n=n-1;
    while(s<=n){
    int m=s+(n-s)/2;

    if(k==a[m]){
        return m;

    }
    else if(k<a[m]){
        n=m-1;
    }
    else
   { s=m+1;}
    // m=(n-s)/2;
 }
 return -1;}