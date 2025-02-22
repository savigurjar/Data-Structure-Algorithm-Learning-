#include <iostream>
using namespace std;
// int maxEle(int arr[], int index, int n)
// {
//     if (index == (n - 1))
//     {
//         return arr[index];
//     }
//     return max(arr[index], maxEle(arr, index + 1, n));
// }
// int main()
// {
//     int arr[] = {1, 4, 5, 8, 2};
//     cout << maxEle(arr, 0, 5);
// }


int maxEle(int arr[], int index)
{
    if (index == - 1)
    {
        return arr[index];
    }
    return max(arr[index], maxEle(arr, index -1));
}
int main()
{
    int arr[] = {1, 4, 5, 8, 2};
    cout << maxEle(arr, 4);
}