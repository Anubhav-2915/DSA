// #from a array for height of container return the container which can contain max water
#include <iostream>
using namespace std;

int maxarea(int heights[], int n){
    int lp = 0;
    int rp = n-1;
    int maxarea = 0;
    while(lp<rp){
        int w = rp-lp;
        int h = min(heights[lp], heights[rp]);
        int area = w*h;
        maxarea = max(maxarea, area);
        if (heights[lp] < heights[rp]){
            lp++;
        }
        else rp--;
    }
    return maxarea;
}

int main(){
    int arr[] = { 1,8,3,5,6,7,2};
    int maxArea = maxarea(arr,7);
    cout<<"max water contained is: "<<maxArea<<" units";
    

}
