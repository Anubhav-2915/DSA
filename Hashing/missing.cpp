#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_set <int> s;
        vector<int> ans;
        int currsum = 0;
        int n = grid.size();
        int a;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                currsum += grid[i][j];
                if(s.find(grid[i][j]) != s.end()){
                    a = grid [i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        int b;
        int realsum = (n*n) * ((n*n)+1) / 2;
        b = realsum + a - currsum;
        ans.push_back(b);
        return ans;
    }

    int main(){
        
    }