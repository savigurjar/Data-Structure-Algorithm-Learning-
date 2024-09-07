#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int aggressiveCow(int n,vector<int>&arr,int k)
{
    int start=1,end,ans,mid;
    //sort the array
    sort(arr.begin(),arr.end());
    end = arr[n-1]-arr[0];
    while(start<=end)
    {
       mid =start+(end-start)/2;
       int count=1,pos=arr[0];

       for(int i=0;i<n;i++)
       {
        if(pos+mid<=arr[i])
        {
            count++;
            pos=arr[i];
        }
       }

       if(count<k)
       {
        end=mid-1;
       }
       else
       {
        ans=mid;
        start=mid+1;
       }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"enter size of the array ";
    cin>>n;

    vector<int>arr(n);
    cout<<"enter elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"enter number of cows";
    cin>>k;

    
    if (k > n) {
        cout << "Number of cows cannot be more than the number of elements!" << endl;
        return 1;
    }

    int result = aggressiveCow(n, arr, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
