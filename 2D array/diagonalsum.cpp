#include<iostream>
using namespace std;
void diagonalSum(int arr[][3],int row,int col)
{
    int first=0;
    int second=0;
    int i=0,j;

    //first diagonal
   while(i<row)
   {
    first += arr[i][i];
    i++;
   }

    //second diagonal
    i=0,j=col-1;
    while(j>=0)
    {
        second += arr[i][j];
        i++;
        j--;
    }

    cout<<first<<" "<<second<<" ";
}
int main()
{
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    diagonalSum(arr,3,3);
    return 0;
}