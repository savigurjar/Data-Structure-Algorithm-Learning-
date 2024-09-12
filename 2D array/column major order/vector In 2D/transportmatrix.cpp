#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// o(n^2) and space o(n^2)
/*void transMatrix(vector<vector<int>>&matrix , int n)
{     // Create a new matrix to store the transposed matrix
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[j][i] = matrix[i][j];
        }
    }

    cout<<"printing transpose matrix "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}*/

//without using extra space 
void transMatrix(vector<vector<int>>&matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(matrix[j][i],matrix[i][j]);
        }
    }
   

    cout<<"printing transpose matrix "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}


//or

int main()
{
    int n;
    cout<<"enter row and colum size ";
    cin>>n;

    vector<vector<int>>arr(n,vector<int>(n));
    cout<<"enter elements in matrix ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    transMatrix(arr,n);
    return 0;
}