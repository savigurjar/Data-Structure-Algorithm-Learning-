#include<iostream>
#include<vector>
using namespace std;

//brute force o3
/*int largestSumSubArray(int arr[], int n) {
    int max_sum = INT32_MIN;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int currentSum = 0;
            for(int k=i;k<=j;k++)
            {
                currentSum += arr[k];
            }
            max_sum = max(max_sum,currentSum);
        }
    }
    
    return max_sum;
}*/

//brute force on

int largestSumSubArray(int arr[],int n)
{
int maxi = INT32_MIN;
int prefix=0;
for(int i=0;i<n;i++)
{
    prefix += arr[i];
    maxi = max(maxi,prefix);
    if(prefix<0)
    {
        prefix = 0;
    }
}
return maxi;
}
int main() {
    int n;
    cout<<"enter size of array ";
    cin >> n;
    int arr[n];
    cout<<"enter elements in array ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_sum = largestSumSubArray(arr, n);
    cout << "The largest sum of a subarray is: " << max_sum << endl;

    return 0;
}
