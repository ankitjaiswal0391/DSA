#include<bits/stdc++.h>

using namespace std; 
int Permutations(string ip, string op[]){  // 2 method working solution
    if(ip.length() == 0){
        op[0] = ""; 
        return 1;
        }
    
   string opt[10000];
    int Size = Permutations(ip.substr(1), opt); // op pass kr rhe means output[] mai op hi km kr rha na op
    // jo startaring m hai
  int k = 0;
    for(int i = 0; i < Size; i++){
        for(int j = 0; j <= opt[i].length(); j++){ // this is for bc and cb if abc is input
       // cout<<op[i]<<" ";
            op[k++] = opt[i].substr(0,j) + ip[0] + opt[i].substr(j); // this line is soul of this coding
            


            // then same for i=0   bc
            // ip[[0] add 1st for j=0 == abc (for i=0and j=0)
            // ip[0]add 2nd =bac(for i=0 and j=1)
            // ip[0]add at 3rd ==bca(for i=0 and j=2)
            
            // then same for i=1   cb
            // ip[0] add 1st =acb(for i=1 and j=0) same going on for all other             
        }
    }
    
    return k;
}
 
 

int main() {string s1;
getline(cin,s1);
string op[200];
int p=Permutations(s1,op);
for(int i=0;i<p;i++){
    cout<<op[i]<<"\n";
}


    return 0;
}


        