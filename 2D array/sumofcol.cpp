#include<iostream>
using namespace std;
void sumofEachColumn(int arr[][4],int row,int col)
{
    for(int j=0;j<col;j++)
    {
        int sum=0;
        for(int i=0;i<row;i++)
        {
            sum += arr[i][j];
        }
        cout<<"sum of column "<<j<<" : "<<sum<<endl;
    }

}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    sumofEachColumn(arr,3,4);
    return 0;
}