#include<iostream>
#include<vector>
using namespace std;
int kthMissEle(int n,vector<int>&arr,int k)
{
    int start=0,end=n-1,mid,ans=n;

    while(start<=end)
    {
        mid=start+(end-start)/2;

        // Number of missing elements before arr[mid]
        int missing = arr[mid] - (mid + 1);

        if(missing >= k)
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }

    return ans+k;
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter element in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"enter index you want to find missing element";
    cin>>k;

    int ele = kthMissEle(n,arr,k);
    
     cout<<"missing element is "<<ele<<endl;
    
    return 0;
}