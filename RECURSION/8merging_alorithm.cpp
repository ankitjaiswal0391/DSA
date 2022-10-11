#include<iostream>
using namespace std;
/*void merge(int* a,int s,int m,int n){
// int m=s+(n-s)/2;
int i=s;
int j=m+1;
int k=s;
int *b=new int[n+1];
while (i<=m&&j<=n )
{if(a[i]<=a[j]){
    b[k++]=a[i++];
}
else
b[k++]=a[j++];

    // /* code 
}
while(i<=m){
    b[k++]=a[i++];

}
while(j<=n){
    b[k++]=a[j++];
}
for(int i=0;i<=k;i++){
    a[i]=b[i];
    cout<<a[i]<<"  "<<endl;

}
delete[] b;
}


void merg_short(int *a,int s,int n){
    if(s>=n){
        return ;
    }
int m=s+(n-s)/2;
cout<<"M ="<<m<<endl;
merg_short(a,s,m);
merg_short(a,m+1,n);
merge(a,s,m,n);    
}
*/
void merge(int array[], int const left, int const mid,
           int const right)
{
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],  *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne
        = 0, // Initial index of first sub-array
        indexOfSubArrayTwo
        = 0; // Initial index of second sub-array
    int indexOfMergedArray
        = left; // Initial index of merged array
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return; // Returns recursively
 
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
 
  

int main()
{int a[6]={9,8,7,6,5,3};
int s=0;


// int *p=merg_short(a,s,5);
 mergeSort(a,s,5);
for(int t=0;t<=5;t++){
    cout<<a[t]<<" ";
}
return 0;
}



