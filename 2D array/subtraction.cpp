#include<iostream>
using namespace std;
void subtractionArr(int arr1[][3],int arr2[][3],int row,int col)
{
    int sub[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            // sub[i][j]=arr1[i][j]-arr2[i][j];
            sub[i][j]=arr2[i][j]-arr1[i][j];
        }
    }

        cout<<"after subtraction "<<endl;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int arr1[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[4][3]={16,28,31,40,5,65,71,8,96,10,1,32};

    subtractionArr(arr1,arr2,4,3);


    return 0;
    

}