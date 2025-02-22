#include <iostream>
using namespace std;
bool binarySearch(int arr[], int start, int end, int x)
{
    if (start > end)
    {
        return 0;
    }
    int mid = start + (end - start) / 2;
    if (arr[mid] == x)
    {
        return 1;
    }
    else if (arr[mid] < x)
    {
        return binarySearch(arr, mid + 1, end, x);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, x);
    }
}
int main()
{
    int arr[] = {3, 8, 11, 15, 20, 22};
    int x = 11;
    cout << binarySearch(arr, 0, 5, x);
}