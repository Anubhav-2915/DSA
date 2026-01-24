#include <iostream>
using namespace std;

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    //for traversing all the subarrays we need 2 loops
    //for printing all the subarrays we need one extra looop so in total 3 loops
    for(int st=0;st<8;st++){
        for(int j=st;j<8;j++){
            for(int i=st;i<j;i++){
            cout<<arr[i]<<" ";
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}