#include<iostream>
using namespace std;
// void printArr(int arr[],int index, int n)
// {
//     if(index==n) {return;}
//     cout<<arr[index]<<" ";
//     printArr(arr,index+1,n);
// }
// int main()
// {   
//     int arr[] = {1,2,3,4,5};
//     printArr(arr,0,5);
// }

// reverse order
// void printArr(int arr[],int index, int n)
// {
//     if(index==n) {return;}
   
//     printArr(arr,index+1,n);
//      cout<<arr[index]<<" ";
// }
// int main()
// {   
//     int arr[] = {1,2,3,4,5};
//     printArr(arr,0,5);
// }

// 2argument
void printArr(int arr[],int index)
{
    if(index==-1) {return;}
 
      printArr(arr,index-1);
       cout<<arr[index]<<" ";
}
int main()
{   
    int arr[] = {1,2,3,4,5};
    printArr(arr,4); 
}