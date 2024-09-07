#include<iostream>
#include<vector>
using namespace std;
int searchInsert(int n,vector<int>&arr,int target)
{
    int start = 0 , end = n-1 , mid , ans = n;
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid]==target)
        {
            ans = mid;
            break;
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            ans = mid;
            end = mid-1;
        }
    }

    cout<<"position of element wether it is present or not {at index} will be "<<ans<<endl;
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"enter elements in array";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }

    int t;
    cout<<"enter element you want to insert";
    cin>>t;

    searchInsert(n,arr,t);

    return 0;
}