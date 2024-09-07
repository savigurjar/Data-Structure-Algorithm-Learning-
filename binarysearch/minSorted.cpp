#include<iostream>
#include<vector>
using namespace std;

int minEleInSortedArr(int n,vector<int>&arr)
{
    int start = 0,end = n-1,mid,ans=arr[0];
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]>=arr[0])
        {
            start = mid+1;
        }
        else
        {
            ans = arr[mid];
            end = mid-1;
        }
    }

    cout<<"min element in sorted array "<<ans<<endl;
}

int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter elements in mountain array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    minEleInSortedArr(n,arr);
    return 0;
}