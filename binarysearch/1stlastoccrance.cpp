#include<iostream>
#include<vector>
using namespace std;
int findFirstAndLastOccurance(int n,vector<int>&arr,int target)
{
    int start = 0 ,end = n-1 , mid;
    int first = -1, last = -1;

    // first occurance
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid]==target)
        {
            first = mid ;
            end = mid-1;
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

    // last occurance
    start = 0 ,end = n-1 , mid;
    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(arr[mid]==target)
        {
            last = mid;
            start = mid+1;
        }
        else if(arr[mid]<target)
        {
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
    }

    cout<<"first occurance of the element is at index "<<first<<endl;
    cout<<"last occurance of the element is at index "<<last<<endl;
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
 cout<<"enter element you want to find occurance";
 cin>>t;

 findFirstAndLastOccurance(n,arr,t);

 return 0;

}