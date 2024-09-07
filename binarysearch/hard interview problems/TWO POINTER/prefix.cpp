#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//prefix sum
/*
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> prefix(n); // Declare prefix array with size n
    prefix[0] = arr[0];    // Initialize the first element

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
}*/

//suffix sum
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> suffix(n); //
    suffix[n-1] = arr[n-1];    // 

    for (int i = n-2; i >=0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }
}