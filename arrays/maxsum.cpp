#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array:-";
    cin>>n;
    int arr[5];
    cout<<"enter the elements of arrays:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
        int currsum=0;
        for(int end=st;end<n;end++){
            currsum+=arr[end];
            maxsum= max(currsum,maxsum);
        }
    }
    cout<<"max subarray sum:-"<<maxsum;
}