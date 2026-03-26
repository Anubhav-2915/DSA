// we have to find the value of x^n where  n is very large
#include <iostream>
using namespace std;

int main(){

    int n = 5; //power
    int x = 3; // base number
    int ans = 0;
    if(n<0){
        x = 1/x;
        n = -n;
    }
    // we have to find 3^5:-
    // method
    while(n>0){
        if(n%2 == 1){
            ans += x;
        }
        x*=x;
        n = n/2;
    }
    cout<<"The value is:- "<<ans<<endl;
    return 0;

}