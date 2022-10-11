#include<iostream>
using namespace std; //this question can also solve by 6subsequence this problem solve by this method only to 
// increase the knowledge of 2D ARRAY
int subset(int ip[], int n, int op[][20]) {
    if(n==0){op[0][0]==0;
             return 1; // here 1 is row of 2D op ARRAY 1st row
        
    }
    int p=subset(ip+1,n-1,op);
    int i,j;
    for(i=0;i<p;i++){
     op[i+p][0]=1+op[i][0];
        op[i+p][1]=ip[0];
    }
    for(i=0;i<p;i++){
for(j=1;j<op[i+p][0];j++)
        op[i+p][j+1]=op[i][j];}// op[][0,1] already fill thats why start from  3rd index
    return 2*p;

}
int main() {
  int input[20],length, output[100][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);
  cout<<"size  "<<size;

  for( int i = 0;i<size; i++) { 
	for( int j = 1; j <= output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
