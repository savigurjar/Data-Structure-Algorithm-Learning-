#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int shipwithDays(int weights[],int n,int days)
{
    int start=0,end=0,ans,mid;
    for(int i=0;i<n;i++)
    {
       start = max(start,weights[i]);// Start with the max element in the array
        end += weights[i];              // End with the sum of all elements
       
    }

    while(start<=end)
    {
        mid = start+(end-start)/2;

        int ship=0,count=1;
        for(int i=0;i<n;i++)
        {
            ship += weights[i];
            if(ship>mid)
            {
                count++;
                ship = weights[i];
            }
        }
        if(count<=days)
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

    int weights[n];
    cout<<"enter element in array";
    for(int i=0;i<n;i++)
    {
        cin>>weights[i];
    }

    int days;
     cout << "Enter number of days: ";
    cin>>days;

    long long result = shipwithDays(weights, n, days);
    cout << "The minimum weight capacity of the ship to ship all packages within " << days << " days is: " << result << endl;
    return 0;
}