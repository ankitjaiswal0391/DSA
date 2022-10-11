#include<iostream>
using namespace std;
    int SubsetSumToK(int ip[],int n,int op[][20],int k){
      
if (n==0){
      if(k==0){
        op[0][0]==0;
        return 1;
      }else
        return 0;}

    int op1[80][20];
     int op2[80][20];
    
    int s1=SubsetSumToK(ip+1,n-1,op1,k-ip[0]);
    int s2=SubsetSumToK(ip+1,n-1,op2,k);
    for(int i=0;i<s1;i++){
      op[i][0]=op1[i][0]+1; // OP1 that why choose because in op1 in we have to add 1st element of input to get required output
      op[i][1]=ip[0];
    }
    int i=0;
    for(;i<s1;i++){
    for(int j=1;j<op[i][0];j++){
      op[i][j+1]=op1[i][j]; // same as array problem updTING THE COMING 1ST ELEMENT 
    }}
    int y;
    for(y=0;y<s2;y++){
      for(int j=0;j<=op2[y][0];j++){
        op[y+s1][j]=op2[y][j]; // in this array not required to updating 1st element
      }
    }/*for(int o=0;o<s1+s1;o++){
      for(int f=1;f<=op[o][0];f++){
        cout<<op[o][f];
      }
      cout<<"\n";
    }*/
      return s1+s2;}


    

int main()
 {
  int input[20],length, output[80][20], k;
  output[0][0]=0;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];

  cin >> k;
  
  int size = SubsetSumToK(input, length, output, k);
  cout<<"size "<<size<<"\n";

 for( int i = 0; i < size; i++) { 
	for( int j = 1; j<=output[i][0]; j++) { 
		cout << output[i][j] << " ";
    }
    cout << endl;
  }
   return 0;
}
