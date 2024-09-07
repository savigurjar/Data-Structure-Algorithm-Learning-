#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>productPair(vector<int>&arr,int n,int target)
{    sort(arr.begin(),arr.end());
    vector<int>ans;
    int start=0,end=n-1;
    while(start<=end)
    {   
        long long product = static_cast<long long>(arr[start]*arr[end]);
        if(product==target)
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(product<target)
        {
            start++;
        }
        else{
            end--;
        }
    }
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
    cout << "Enter the target product: ";
    cin >> k;

    vector<int> result = productPair(arr, n, k);
    if (result.empty())
    {
        cout << "No elements in the array have a product equal to the target." << endl;
    }
    else
    {
        cout << "Elements present at indices " << result[0] << " and " << result[1] << endl;
        cout << "Values: " << arr[result[0]] << " and " << arr[result[1]] << endl;
        cout << "product : " << arr[result[0]] * arr[result[1]] << endl;
    }

    return 0;
}
