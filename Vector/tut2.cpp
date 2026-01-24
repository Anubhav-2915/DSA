//single number problem
#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>vec){
        int  ans=0;
        for(int val:vec){
            ans=ans^val;

        }
        return ans;
}

int main(){
    vector<int>nums{
        1,2,3,4,2,3,4
    };
    cout<<singleNumber(nums);
    return 0;
}