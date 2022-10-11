#include <iostream>

using namespace std;

int staircase(int n){
    if(n==0){return 1;} // this base case not identify like 1 for 1, 2 for 2
    if(n==1){return 1;}
    if(n==2){return 2;}
 //   if(n==4){return 3;}
    int x=staircase(n-1); // we taking only 1st step for 1
    int y=staircase(n-2); // taking only 1nd step for 2
    int z=staircase(n-3); // taking only 1nd step for 3 and all work done by recursion
            return x+y+z;}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
