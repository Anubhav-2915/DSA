#include <iostream>
using namespace std;

void reverse(int l,int r, int arr[]){
    if(l>=r-1){
        return;
    }
    swap(arr[l],arr[r-1]);
    reverse(l+1,r-1,arr);


}
int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    reverse(0,9,arr);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<"\t";

    }
    return 0;

}