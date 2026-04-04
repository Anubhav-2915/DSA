#include <iostream>
#include <climits>
using namespace std;

int maxcolsum(int mat[][3], int rows, int cols){
    int maxsum = INT_MIN;
    
    for(int i = 0; i<cols; i++){
        int colsumI = 0;
        for(int j = 0; j<rows; j++){
            colsumI += mat[j][i];
        }
        maxsum = max(maxsum, colsumI);
    }
    return maxsum;
}

int main(){

    int matrix[4][3] = {
        {1,2,3},
        {2,4,12},
        {6,7,9},
        {9,7,5}
    };
    int rows = 4;
    int cols = 3;
    cout<<maxcolsum(matrix,rows,cols);

}