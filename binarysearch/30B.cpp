#include<iostream>
#include<vector>
using namespace std;
int findIndex(int n,vector<int>&arr,int key)
{
    int start = 0, end = n-1 ,mid;
    int index = -1;
    while(start<=end)
    {
        mid = start + (end-start)/2;
        if(arr[mid]==key)
        {
            index = mid;
        }
        else if(arr[mid]<key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    } 
    cout<<"element found at index"<<index<<endl;
}
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"enter element you want to find";
    cin>>k;

    findIndex(n,arr,k);

    return 0;

}
