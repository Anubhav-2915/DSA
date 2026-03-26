#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    // char arr[] = { 'h','e','l','l','o','\0'};
    // int st = 0;
    // int e = 4;
    // while(st<e){
    //     swap(arr[st],arr[e]);
    //     st++;
    //     e--;
    // }
    // for(char ch : arr){
    //     cout<<ch<<" ";
    // }
    //reverse a string:-
    string str = "hello world";
    reverse(str.begin(), str.end());// begin and end gives us iterators
    cout<<str;  

}