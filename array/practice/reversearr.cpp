#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int reverseArray(int n, vector<int>&arr)
{
    int start = 0;
    int end = n-1;
    while(start<end)
    {
       swap(arr[start],arr[end]);
        start++;
        end--;

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
int n;
cin>>n;
vector<int>arr(10000);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
reverseArray(n,arr);
return 0;
}

// int main()
// {
//     int arr[7] = {7,13,97,95,94,93,92};
//     int start = 0;
//     int end = 6;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

//     for(int i=0;i<7;i++)
//     {
//     cout<<arr[i]<<" ";
//     }
//     return 0;
// }