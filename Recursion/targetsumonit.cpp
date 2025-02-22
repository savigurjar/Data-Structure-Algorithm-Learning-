#include <iostream>
#include <vector>
using namespace std;
int subSUm(int arr[], int index, int n, int sum)
{
    if (sum == 0)
    {
        return 1;
    }
    if (index == n || sum < 0)
    {
        return 0;
    }
    return subSUm(arr, index + 1, n, sum) + subSUm(arr, index, n, sum - arr[index]);
}
int main()
{
    int arr[] = {2, 3, 4};
    int target = 6;
    cout << subSUm(arr, 0, 3, target);
}