#include<iostream>
using namespace std; 
int product(int arr[],int index,int n)
{   if(index==n)
{
    return 1;
}
    return arr[index]*product(arr,index+1,n);
}
int main()
{
    int arr[] = {1, 4, 5, 8, 2};
    cout<<product(arr,0,5);
}