#include<iostream>
using namespace std; 
// int sum(int arr[],int index,int n)
// {
//     if(index==n)
//     {
//         return 0;
//     }
//     return arr[index]+sum(arr,index+1,n);
// }
// int main(){
//     int arr[] = {2,4,5,8,2};
//     cout<<sum(arr,0,5);
// }


int sum(int arr[],int index)
{
    if(index==-1)
    {
        return 0;
    }
    return arr[index]+sum(arr,index-1);
}
int main(){
    int arr[] = {2,4,5,8,2};
    cout<<sum(arr,4);
}