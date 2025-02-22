#include <iostream>
using namespace std;
// bool linearSearch(int arr[], int x, int index, int n)
// {
//     if (index == n)
//     {
//         return 0;
//     }
//     if (arr[index] == x)
//     {
//         return 1;
//     }
//     return linearSearch(arr, x, index + 1, n);
// }
bool linearSearch(int arr[], int x, int index)
{
    if (index == -1)
    {
        return 0;
    }
    if (arr[index] == x)
    {
        return 1;
    }
    return linearSearch(arr, x, index - 1);
}
int main()
{
    int arr[] = {2, 3, 4, 7, 9, 8};
    int x = 7;
    cout << linearSearch(arr, x, 5);
}