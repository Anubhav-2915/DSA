// given a sorted array and rotated from somewhere we have to apply binary search on it 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {7,8,9,0,1,2,3,4,5,6};
    int target = 5;
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid]>=nums[st]){
            if(nums[st]<target && target<nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else if(nums[mid]<=nums[end]){
            if(nums[mid]<target && target<nums[end]){
                st = mid-1;
            }
            else end = mid+1;
        }
    }
    return -1;

}