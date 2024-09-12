#include<iostream>
using namespace std;
void reverserow(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        int start=0,end=col-1;
        while(start<end)
        {
            swap(arr[i][start],arr[i][end]);
            start++,end--;
        }
    }
}
int main()
{
    int arr[3][4]={5,4,3,0,1,2,6,8,4,9,3,2};

    reverserow(arr,3,4);

    cout<<"array after reversing each row: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}