#include<iostream>
using namespace std;
int addMatrix(int ar1[][4],int ar2[][4],int row,int col)
{
    int ans[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          ans[i][j] = ar1[i][j]+ar2[i][j];
        }
    }

    // print sum 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4]={13,2,3,4,15,5,7,8,9,6,11,1};

    addMatrix(arr1,arr2,3,4);
    return 0;
}