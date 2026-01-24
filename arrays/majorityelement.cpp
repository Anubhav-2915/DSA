// #we have to find the majority elemnent given that there always exist a majority element in the array
#include <iostream> 
#include <vector>
using namespace std;

// Brute Force method
int majorityelement(vector<int> nums){
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }
}
// Best Method(Moore method)
int moooremethod(vector<int> nums){
    int ans = 0;
    int freq = 0;
    for(int val : nums){
        if(freq == 0){
            ans = val;
        }
        if(ans == val){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}

int main(){
    vector<int>nums = {1,1,2,3,3,1,1,1};
    int ans = majorityelement(nums);
    int ans = moooremethod(nums);
    cout<<"the majority element is:"<<ans;

    return 0;
}