#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
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
    bubblesort(arr, size);
    cout << "sorted array:-";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}