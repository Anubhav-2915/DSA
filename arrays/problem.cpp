//we have to find the product of the elemnts in array except the ith element and store it at the ith inxdex and return without using division operator
#include <iostream>
#include <vector>
using namespace std;

vector<int> soln(vector<int> nums){
        int n = nums.size();
        vector<int> ans(n,1);
        // prefix
        int prefix = 1;
        for(int i = 1; i<n; i++){
            prefix *= nums[i-1];
            ans[i]*= prefix;
        }
        // sufix 
        int sufix =1;
        for(int j = n-2; j>=0; j--){
            sufix *= nums[j+1];
            ans[j]*=sufix;
        }
        return ans;
}
int main(){
    vector<int>nums = {2,3,4,5};
    vector<int> ans = soln(nums);
    for(int val = 0; val<ans.size(); val++){
        cout<<ans[val]<<endl;
    }
}