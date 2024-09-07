#include<iostream>
#include<vector>
using namespace std;
int numOfOccurance(int n,vector<int>&arr,int target)
{
    int start = 0,end = n-1,mid;
    int first = -1, last = -1;

    //first occurance
    while(start<=end)
    {
        mid = start+(end-start)/2;
        if(arr[mid]==target)
        {
            first = mid;
            end = mid - 1; //left side
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    //last occurance
    start = 0, end = n-1;
    while(start<=end)
    {
        mid = start+(end-start)/2;
        if(arr[mid]==target)
        {
            last = mid;
            start = mid+1; // right side
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    if(first == -1 || last == -1)
    {
        return 0;
    }
    else
    {
        int occurance = last - first + 1;
        cout<<"number of occurance of given target in array "<<occurance<<endl;
    }
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
    cout<<"enter element you want to find occurance in array";
    cin>>t;

    numOfOccurance(n,arr,t);

    return 0;
}