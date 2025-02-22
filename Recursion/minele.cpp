#include<iostream>
using namespace std; 
int minelement(int arr[],int index,int n)
{
    if(index==(n-1))
    {
        return arr[index];
    }
    return min(arr[index],minelement(arr,index+1,n));
}
int main()
{
    int arr[] = {7,2,4,1,6};
    cout<<minelement(arr,0,5);
}