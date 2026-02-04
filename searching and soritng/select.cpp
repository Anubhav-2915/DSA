#include <iostream>
using namespace std;

void selectsort(int arr[], int size)
{
    int smallest;
    for (int i = 0; i < size - 1; i++)
    {
        smallest = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        swap(arr[smallest], arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}

void bubblesort(int arr[], int size)
{
    for (int i = size - 1; i > 0; i--)
    {
        int didswap = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                int didswap = 1;
            }
        }
        if (didswap == 0)
        {
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
}
int main()
{
    int arr[5] = {
        10,
        23,
        1,
        65,
        21,
    };
    bubblesort(arr, 5);
    return 0;
}