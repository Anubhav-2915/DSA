// in  a sorted array every element comes twice except a single elemnet we have to find the sinle element. return the element.
#include <iostream>
#include <vector>
using namespace std;

int peakelement(vector<int> nums){
    int st = 0;
    int end = nums.size()-1;
    int n = nums.size();
    while(st<=end){
        int mid = st + (end-st)/2; 

        if(mid == 0 && nums[0]!= nums[1])return nums[mid];
        if(mid == n-1 && nums[n-2]!= nums[n-1])return nums[mid];//edgecases

        if(nums[mid]!= nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }
        if(mid%2==0){
            if(nums[mid-1]==nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{
            if(nums[mid-1]==nums[mid]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    vector <int> nums = {2,2,3,3,4,5,5,6,6};
    int single = peakelement(nums);
    cout<<single;
    return 0;
}