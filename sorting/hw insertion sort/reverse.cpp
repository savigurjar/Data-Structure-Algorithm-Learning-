#include<iostream>
#include<vector>
using namespace std;
void insertionSort(int n, vector<int>& arr)
{
for(int i=1;i<n;i++)

{
    for(int j=i;j>0;j--)
    
    {
        if(arr[j]>arr[j-1])
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

    vector<int>arr(10000);
    cout<<"enter element in array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(n,arr);
    cout<<"sorted array in decresing  order ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}