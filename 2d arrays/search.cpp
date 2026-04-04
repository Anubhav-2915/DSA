// we have to search target in the given 2d array or matrix in O(log(m*n)) time complexity
#include <iostream>
#include <vector>
using namespace std;

bool searchinrow( vector<vector<int>>& mat, int target, int row){
    int n = mat[0].size();
    int start = 0, end = n-1;
    while (start<=end){
        int mid = start + (end - start)/2;
        if(target == mat[row][mid]){
            return true;
        }
        else if(target > mat[row][mid]){
            start = mid+1;
        }
        else {
            end = mid - 1;
        }
    }
}

bool searchinmatrix( vector<vector<int>>& mat, int target){
    int m = mat.size(), n = mat[0].size();
    int startrow = 0, endrow = m-1;
    while(startrow <= endrow){
        int midrow = startrow + (endrow - startrow)/2;
        if(target >= mat[midrow][0] && target <= mat[midrow][n-1]){
            // found the row;
            return searchinrow(mat, target, midrow);
        }
        else if(target > mat[midrow][n-1] ){
            startrow = midrow + 1;
        }
        else{
            endrow = midrow - 1;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10,11,12}
};

    cout<<searchinmatrix(matrix,8);
}