// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.

#include <iostream>
#include <vector>
using namespace std;

int peakelement(vector<int> arr){
        int st = 1;
        int end = arr.size()-2;

        while (st<=end){
        int mid =  st + (end-st)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }
        else if (arr[mid]>arr[mid-1]){//right
            st = mid+1;
        }
        else{
            end = mid -1;
        }
    }
        return -1;
}

int main(){
    vector<int> arr = { 1,2,3,4,9,8,7,6};
    cout<<peakelement(arr);
    return 0;
}
