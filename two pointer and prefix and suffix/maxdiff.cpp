#include<iostream>

using namespace std;
//optimize o(n)
int maximumDiffbetTwoele(int arr[],int n)
{
/*if (n < 2) return 0; // Handle case with fewer than 2 elements

    int min_element = arr[0]; // Initialize with the first element
    int max_diff = INT16_MIN;   // To store maximum difference

    for (int i = 1; i < n; i++)
    {
        // Calculate difference between current element and minimum element so far
        max_diff = max(max_diff, arr[i] - min_element);

        // Update minimum element
        min_element = min(min_element, arr[i]);
    }

    return max_diff;*/

    if (n < 2) return 0; // Handle case with fewer than 2 elements

    // Create a prefix array that stores the maximum element up to index i
    int prefix[n];
    prefix[0] = arr[0];

    // Fill the prefix array with the maximum values seen so far
    for (int i = 1; i < n; i++)
    {
        prefix[i] = max(prefix[i-1], arr[i]);
    }

    int max_diff = INT16_MIN;

    // Calculate maximum difference between prefix[i-1] and arr[i]
    for (int i = 1; i < n; i++)
    {
        max_diff = max(max_diff, prefix[i-1] - arr[i]);
    }

    return max_diff;
}
int main()
{
    int n;
    cout<<"enter size of the arrray ";
    cin>>n;

    int arr[n];
    cout<<"enter elements in array ";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   int maxdiff = maximumDiffbetTwoele(arr,n);
   cout<<"maximum diffrence between two elements "<<maxdiff<<endl;

   return 0;
}