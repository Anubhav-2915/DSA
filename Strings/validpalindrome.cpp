#include <iostream>
#include <string>
using namespace std;

bool isalphanumeric(string str, int pos){
    if('a'<=str[pos]<='z'){
        return true;
    }
    else if('A'<=str[pos]<='Z'){
        return true;
    }
    else if(0<=str[pos]<=9){
        return true;
    }
    else{
        return false;
    }
}
bool ispalindrome(string str){
    int st= 0;  
    int end = str.length()-1;
    while(st<end){
        if(!isalphanumeric(str,st)){
            st++;
            continue;
        }
        if(!isalphanumeric(str,end)){
            end--;
            continue;
        }
            if(tolower(str[st]) != tolower(str[end])){
            return false;
        }
        st++,end--;
    }
    return true;
}
int main(){
    string str;
    cout<<"enter a string to check for palindrome:- ";
    cin>>str;
    if(ispalindrome(str)){
        cout<<"the given string is palindorme";
    }
    else{
        cout<<"the given string is not palindrome";
    }
    return 0;
}

