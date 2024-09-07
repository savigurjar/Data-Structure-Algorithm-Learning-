#include<iostream>
#include<algorithm>
using namespace std;
//using brute force O(n^3)
/*
void sumof4ele(int n,int arr[],int x)
{
    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            for(int k = j+1;k<n-1;k++)
            {
                for(int m = k+1; m<n;m++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[m]==x)
                    {
                        cout<<"indices are: "<<i<<" "<<j<<" "<<k<<" "<<m<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"elemnts are not present "<<endl;
}*/

//binary search o(n^3 log n)
/*void sumof4ele(int n,int arr[],int x)
{
    //sort array
    sort(arr,arr+n);
    
    cout<<"sorted array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-3;i++)
    {
        for(int j=i+1;j<n-2;j++)
        {
            for(int k=j+1;k<n-1;k++)
            {
                int target = x - arr[i]-arr[j]-arr[k];
                int start = j+1, end = n-1;

                while(start<=end)
                {
                    int mid = start+(end-start)/2;
                    if(arr[mid]==target)
                    {   cout<<endl;
                        cout<<"indices are: "<<i<<" "<<j<<" "<<k<<" "<<mid<<endl;
                        return;
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
            }
        }
    }
    cout<<"elements are not found "<<endl;
}*/

//using optimize two pointer approach 
//o(n^3)
void sumof4ele(int n,int arr[],int x)
{
sort(arr,arr+n);

for(int i=0;i<n-3;i++)
{
    for(int j=i+1;j<n-2;j++)
    {
        for(int k=j+1;j<n-1;k++)
        {
            int target = x - arr[i]-arr[j];
            int start = j+1,end = n-1;
            while(start<end)
            {
                int sum = arr[start]+arr[end];
                if(sum==target)
                {
                    cout<<"indices are :"<<i<<" "<<j<<" "<<start<<" "<<end<<endl;
                    return;
                }
                else if(sum<target)
                {
                    start++;
                }
                else
                {
                    end--;
                }
            }
        }
    }
}
cout<<"elements are not found "<<endl;
}
 int main()
{
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int t;
    cout << "Enter target sum for 3 elements: ";
    cin >> t;

    // Call function to find the triplet
    sumof4ele(n, arr, t);

    return 0;
}


