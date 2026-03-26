// we have an array of 0s, 1s, and 2s sort them out in ascending order
#include <iostream>
#include <vector>
using namespace std;

void sorting (vector<int>& arr){
    int low = 0;
    int mid = 0;
    int n = arr.size();
    int high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main(){
    vector<int> arr = {2,1,1,2,2,0,0,1,0};
    sorting(arr);
    for(int val : arr){
        cout<<arr[val]<<" ";
    }
    return 0;

}