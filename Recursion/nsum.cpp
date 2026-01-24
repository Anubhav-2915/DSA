#include <iostream>
using namespace std;

int sum(int n, int total){
    if(n==0){
        return total;
    }
    total+=n;
    n=n-1;
    sum(n,total);
    
}

int sum2(int n){
    if(n==0){
        return 0;
    }
    return n+ sum2(n-1);
}

int main(){
    int total=0;
    int n=10;
    cout<<sum(n,total)<<endl;
    total=sum2(n);
    cout<<total<<endl;
    return 0;
}