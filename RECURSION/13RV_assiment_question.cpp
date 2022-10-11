/*a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
INPUT
IF IN FORM OF 
abbabbabb 
then return true
if INPUT IS abbabab then return false */
bool check(char s[]){
    if(s[0]=='\0'){
        return true;
    }
if(s[0]!='a'){
    return false;
}
if(s[1]!='\0'&&s[2]!='\0'){ // this is for checking 2 and 3 index having element
    if(s[1]=='b'&&s[2]=='b'){
        return check(s+3); // here we check for first 3 index of string
        // dividing from 3rd index of array
    }
}
return check(s+1); // if 2nd or 3rd index of array is =0 means array having only 1 index
}

#include <iostream>
using namespace std;

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=check(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
