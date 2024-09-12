#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//without extra space
/*
void rotateBy90(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    // cout<<"transpose the matrix ";
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reverse each row
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}*/

//with extra space 
void rotateBy90(vector<vector<int>>&matrix)
{
    int n = matrix.size();
    vector<vector<int>>ans(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[j][n-1-i] = matrix[i][j];
        }
    }
     matrix = ans;
}
int main()
{
    int n;
    cout << "enter size of matrix ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "enter elements in matrix ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotateBy90(matrix);

    cout << "after rotate matrix by 90" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
