#include<iostream>
using namespace std;
void rowIndexMaxSum(int arr[][5],int row,int col)
{
    int sum=INT16_MIN,index=-1;
    for(int i=0;i<row;i++)
    {
        int total = 0;
        for(int j=0;j<col;j++)
        {
            total += arr[i][j];
        }
        if(sum<total)
        {
            sum = total;
            index=i;
        }
    }
    cout<<"row with maximum sum is at index: "<<index<<endl;

    cout<<"Elements of the row "; 
    for(int j=0;j<col;j++)
    {
        cout<<arr[index][j]<<" ";
    }
    cout<<endl;

}
int main()
{
   int arr[4][5]={1,2,3,4,5,6,7,8,9,10,20,19,18,17,16,15,14,13,12,11};

   rowIndexMaxSum(arr,4,5);
   return 0;
}