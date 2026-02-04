#include <iostream>
#include <vector>
using namespace std;

int peakindex(vector<int> arr){
    int st = 1;
    int end = arr.size();

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
    vector<int> arr =  {2,3,4,7,9,6,5,1};
    int index = peakindex(arr);
    cout<< index;
}