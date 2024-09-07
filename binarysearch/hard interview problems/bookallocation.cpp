#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long bookAllocation(int arr[],int n,int s)
{
 if(s>n)
 {
    return -1; // More students than books; not possible to allocate
 }
 int start=0,end=0,mid;
 long long ans;
  //find max 
 for(int i=0;i<n;i++)
 {
  start = max(start,arr[i]);
  end += arr[i];
 }

 while(start<=end)
 {
    mid = start+(end-start)/2;

    int pages=0,count=1;
    for(int i=0;i<n;i++)
    {
        pages += arr[i];
        if(pages>mid)
        {
            count++;
            pages = arr[i];
        }
    }

    if(count<=s)
    {
        ans = mid;
        end =mid-1;
    }
    else{
        start = mid+1;
    }
 }
return ans;
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;

    int arr[n];
    cout<<"enter element in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int s;
    cout<<"enter student number you want to distribute";
    cin>>s;

    long long result = bookAllocation(arr, n, s);

    if (result != -1) {
        cout << "The minimum possible maximum pages allocated to a student is: " << result << endl;
    } else {
        cout << "Invalid input: More students than books available." << endl;
    }

    return 0;
}