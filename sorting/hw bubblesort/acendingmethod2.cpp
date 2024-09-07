#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(int n, vector<int> &arr) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) { // Sort in increasing order
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}
int main()
{
    int n;
    cout << "enter size ";
    cin >> n;
    vector<int> arr(100000);
    cout << "enter size of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(n, arr);
    cout << "sorted array ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}