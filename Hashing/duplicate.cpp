// we have array of size [n+1] and there are numbers from 1 to n. There are duplicate numbers present  in the array find it 
#include <iostream>
#include <vector>
using namespace std;

int duplicate(vector<int>nums){
    int slow = nums[0], fast = nums[0];
    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(slow != fast);

    slow = nums[0];
    while(slow != fast){
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main(){
    vector<int> nums = {1,2,6,4,5,5,3};
    cout<<duplicate(nums);
}