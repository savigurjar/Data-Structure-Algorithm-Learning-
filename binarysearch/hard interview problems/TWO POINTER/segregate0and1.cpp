#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Brute force approach to segregate 0s and 1s
/*void segregate0And1(int n, vector<int>& arr)
{
    int count0 = 0;

    // Count the number of 0s in the array
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count0++;
        }
    }

    // Fill the array with 0s first
    for(int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }

    // Fill the remaining positions with 1s
    for(int i = count0; i < n; i++)
    {
        arr[i] = 1;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array (only 0s and 1s): ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    segregate0And1(n, arr);

    cout << "After segregation, the final array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}*/

//using two pointer approach
void segregate(vector<int>&arr,int n)
{
  int start=0,end=n-1;
  while(start<=end)
  {
    if(arr[start]==0)
    {
        start++;
    }
    else
    {
        if(arr[end]==0)
        {
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else
        {
            end--;
        }
        
    }
  }
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array (only 0s and 1s): ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    segregate(arr,n);

    cout << "After segregation, the final array is: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
