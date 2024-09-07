#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long  painterPartition(int arr[],int n,int k)
{
    long long start=0,end=0,ans,mid;
    for(int i=0;i<n;i++)
    {
        if(start<arr[i])
        {
            start = arr[i];
        }
        end += arr[i];
    }

    while(start<=end)
    {
        mid = start+(end-start)/2;

        long long painter=0,count=1;
        for(int i=0;i<n;i++)
        {
            painter += arr[i];
            if(painter>mid)
            {
                count++;
                painter = arr[i];
            }
        }
        if(count<=k)
        {
            ans= mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter size of array ";
    cin>>n;

    int arr[n];
    cout<<"enter element in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
     cout << "Enter number of painters: ";
    cin>>k;

    long long result = painterPartition(arr, n, k);
    cout << "The minimum time required to paint all boards is: " << result << endl;
    return 0;
}