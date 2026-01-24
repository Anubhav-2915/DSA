#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high,int size){
    int temp[size];
    int i=0;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i]=arr[left];
            left++;
            i++;
        }
        else{
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid){
        temp[i]=arr[left];
        left++;
        i++;
    }
     while(right<=high){
        temp[i]=arr[right];
        right++;
        i++;
    }
    for(int j=low;j<=high;j++){
        arr[j]=temp[j-low];
    }
  
    

}
void mergesort(int arr[], int low, int high,int size){
    if(low>=high){
        return;
    }
    int mid=(low+high)/2;
    mergesort(arr,low,mid,size);
    mergesort(arr,mid+1,high,size);
    merge(arr,low,mid,high,size);
    
}
 
int main(){
    
    int size;
    cout << "enter the size of the array:-";
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array:-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr,0,size,size);
    cout << "sorted array:-";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
