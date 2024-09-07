#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int n, vector<char>& arr)
{
for(int i=n;i>1;i--)
{
    for(int j=i-1;j>0;j--)
    {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        else{
            break;
        }
    }
}

}
int main()
{
    int n;
    cout<<"enter size of array ";
    cin>>n;

    vector<char>arr(1000);
    cout<<"enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(n,arr);
    cout<<"sorted array in increasing order by char ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}