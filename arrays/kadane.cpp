#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "enter the size of array:-";
    cin >> n;
    int arr[10];
    cout << "enter the elements of arrays:-";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int currmax = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++){
        currmax += arr[i];
        if (maxsum < currmax){
            maxsum = currmax;
        }
        if (currmax < 0){
            currmax = 0;
        }
    }
    cout << "The maxsubarray sum is:" << maxsum;
}