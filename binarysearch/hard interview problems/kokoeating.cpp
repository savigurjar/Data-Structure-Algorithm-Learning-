#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int kokoeatingB(int n,vector<int>&piles,int h)
{
    int start=0,end=0,ans,mid;
    long long sum = 0;
    for(int i=0;i<n;i++)
    {
      sum += piles[i];
      end = max(end,piles[i]);
    }

    start = sum/h;
    if(!start)
    {
        start=1;
    }

    while(start<=end)
    {
        mid = start+(end-start)/2;

        int total_time = 0;
        for(int i=0;i<n;i++)
        {
            total_time += piles[i]/mid;
            if(piles[i]%mid)
            {
                total_time++;
            }
        }

        if(total_time>h)
        {
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
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
    cout<<"enter elements in array ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int h;
    cout<<"enter hour ";
    cin>>h;
   

    int result = kokoeatingB(n, arr, h);
    cout << "The minimum eating speed is: " << result << endl;

    return 0;
}