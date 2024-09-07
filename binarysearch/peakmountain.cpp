#include<iostream>
#include<vector>
using namespace std;
int peakEleInMountainArr(int n,vector<int>&arr)
{
    int start = 0,end = n-1,mid;
    while(start<=end)
    {
        mid = end + (start-end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
           return mid;
        }
        else if(arr[mid]>arr[mid-1])
        {
            start = mid+1;
        }
        else{
            end = mid-1;
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

   int peakele =  peakEleInMountainArr(n,arr);
   if(peakele)
   {
    cout<<"peakelement in mountain array at index "<<peakele<<endl;
   }
   else
   {
    cout<<"wrong array";
   }

    return 0;
}