#include<iostream>
using namespace std;
#include<cmath>
#include<bits/stdc++.h>

int subs(string s1,string s2[],int n)
{if(n==0){// s1.size()==0 or s1.empty()or s1.lengt()==0
    s2[0]=" ";
    return 1;
}
string s3[n];
string d=s1.substr(1);

int c=subs(d,s2,n-1);
for(int i=0;i<c;i++){
    s2[i+c]=s1[0]+s2[i];

}
// for(int i=0;i<c;i++){
    // s2[i]=s3[i];
// }

return(2*c);
}
int main()
{string s1;
cin>>s1;
int n=s1.size();

string* s2=new string[n*n]; // size of subsequence or out put string
int pp=subs(s1,s2,n);



cout<<pp<<endl;
for(int z=0;z<pp;z++)
{
    cout<<s2[z]<<" \n";
}
cout<<pp;
return 0;
}