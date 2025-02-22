#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pivot = arr[end]; // Choosing pivot as the last element
    int pos = start; 

    for (int i = start; i < end; i++) // Iterate till end-1
    {
        if (arr[i] <= pivot) // Compare with pivot instead of 'end'
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[end]); // Place pivot in correct position
    return pos;
}

void quicksort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int main()
{
    int arr[] = {10, 3, 4, 1, 5, 6, 3, 2, 11, 9};
    quicksort(arr, 0, 9);
    
   for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}
