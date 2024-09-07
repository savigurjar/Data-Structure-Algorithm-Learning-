#include<iostream>
#include<vector>
using namespace std;
int searchEleInSortedArr(int n,vector<int>&arr,int target)
{
    int start = 0,end = n-1,mid;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]>=arr[0])
        {
            if(arr[start]<=target && arr[mid]>target)
            {
                end = mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && arr[end]>=target)
            {
                start = mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
   return -1;

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

    int k;
    cout<<"enter element you want to search in array";
    cin>>k;

   int result = searchEleInSortedArr(n,arr,k);
   if(result)
   {
    cout<<"element found at index "<<result<<endl;
   }
   else
   {
    cout<<"element is not present";
   }

    return 0;
}