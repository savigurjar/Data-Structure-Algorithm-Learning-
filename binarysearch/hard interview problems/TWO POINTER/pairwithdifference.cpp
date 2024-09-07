#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// brute force approach
/*vector<int> pairDiff(vector<int> &arr, int n, int target)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] == target)
            {
                ans.push_back(j);
                ans.push_back(i);
                return ans;
            }
            else if (arr[i] - arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}*/

#include<iostream>
#include<vector>
using namespace std;

vector<int> pairDiff(vector<int>& arr, int n, int target)
{
    vector<int> ans;
    int start = 0, end = 1;

    while(end < n)
    {
        int diff = arr[end] - arr[start];
        
        if(diff == target)
        {
            ans.push_back(end);
            ans.push_back(start);
            return ans;
        }
        else if(diff < target)
        {
            end++;
        }
        else
        {
            start++;
            if(start == end) // Ensure end is always ahead of start
            {
                end++;
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the target difference: ";
    cin >> k;

    vector<int> result = pairDiff(arr, n, k);
    if (result.empty())
    {
        cout << "No elements in the array have a difference equal to the target." << endl;
    }
    else
    {
        cout << "Elements present at indices " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " and " << arr[result[1]] << endl;
        cout << "Difference: " << arr[result[0]] - arr[result[1]] << endl;
    }

    return 0;
}
