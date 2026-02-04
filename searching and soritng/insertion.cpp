#include <iostream>
using namespace std;

void insertion(int arr[], int size){
    for(int i=0;i<size;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main()
{
    int size;
    cout << "enter the size of the array:-";
    cin >> size;
    int arr[size];
    cout << "enter the elements of the array:-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertion(arr, size);
    cout << "sorted array:-";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}