#include<iostream>
#include<vector>
using namespace std;
int printSubArray(int arr[],int n)
{

 for(int i=0;i<n;i++)
 {
 for(int j=i;j<n;j++)
 {
    for(int k=i;k<j;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
 }
 }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    printSubArray(arr,n);
}