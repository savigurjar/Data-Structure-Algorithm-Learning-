// #include<iostream>
// #include<vector>
// using namespace std;

// Brute force approach to find the indices of 3 elements that sum to x
/*void sumof3ele(int n, int arr[], int x)
{
    // Loop through all triplets
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                // Check if the sum of three elements equals x
                if (arr[i] + arr[j] + arr[k] == x) {
                    cout << "Indices are: " << i << ", " << j << ", " << k << endl;
                    return; // Triplet found, return from the function
                }
            }
        }
    }
    // If no triplet found
    cout << "Elements are not present" << endl;
}*/

//optimize approach
// binary search O(n2 log n)
#include<iostream>
#include<algorithm> // for sort
using namespace std;

// Optimized approach using binary search (O(n^2 log n))
/*void sumof3ele(int n, int arr[], int x)
{
    // Sort the array to use binary search
    sort(arr, arr + n);

    // Traverse the array for the first and second element
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int target = x - arr[i] - arr[j];  // The third element we need to find
            
            // Binary search for the third element
            int start = j + 1, end = n - 1;
            while (start <= end) {
                int mid = start + (end - start) / 2;

                if (arr[mid] == target) {
                    cout << "Indices are: " << i << ", " << j << ", " << mid << endl;
                    return; // Triplet found, exit function
                } else if (arr[mid] < target) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }
    cout << "Elements are not present" << endl;
}
*/

//using two pointer o(n^2)
void sumof3ele(int n,int arr[],int x)
{
//sort using bubble sort
for(int i=n-2;i>=0;i--)
{
    for(int j=0;j<=i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
}
cout<<"sorted array "<<endl;
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}

for(int i=0;i<n;i++)
{
    int target = x - arr[i];
    int start = i+1, end=n-1;
     
    while(start<end)
    {
       if(arr[start]+arr[end]==target)
       {
        cout<<"indices are: "<<i<<" "<<start<<" "<<end;
        return;
       }
       else if(arr[start]+arr[end]<target)
       {
        start++;
       }
       else
       {
        end--;
       }
    }
}
cout<<"no tripple found ";
}
int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int t;
    cout << "Enter target sum for 3 elements: ";
    cin >> t;

    // Call function to find the triplet
    sumof3ele(n, arr, t);

    return 0;
}
