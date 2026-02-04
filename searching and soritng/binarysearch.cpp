// for binary search to work we require a sorted array
#include <iostream>
#include <vector>
using namespace std;


int binarysearch(vector<int> nums,int target, int st, int end){
        int mid = st + (end-st)/2;
        if(st<=end){
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[mid]< target){
            return binarysearch(nums,target,mid+1,end);
        }
        else if(nums[mid]> target){
            return binarysearch(nums,target,st,mid-1);
        }
    }
        return -1;
}

int main(){
    vector<int>nums = {23,34,45,56,67,78,98};//the arr should be sorted;
    cout<< binarysearch(nums,34,0,nums.size()-1);

    return 0;
}