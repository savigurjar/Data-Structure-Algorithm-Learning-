#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

/*void rotateBy180(vector<vector<int>>&matrix)
{
   int n = matrix.size();
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        swap(matrix[i][j],matrix[j][i]);
    }
   }
   for(int i=0;i<n;i++)
   {
    int start=0,end=n-1;
    while(start<end)
    {
        swap(matrix[i][start],matrix[i][end]);
        start++;
        end--;
    }
   }

//    again 
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        swap(matrix[i][j],matrix[j][i]);
    }
   }
   for(int i=0;i<n;i++)
   {
    int start=0,end=n-1;
    while(start<end)
    {
        swap(matrix[i][start],matrix[i][end]);
        start++;
        end--;
    }
   }
}*/

//one more approach
void rotateBy180(vector<vector<int>>&matrix)
{
    int n = matrix.size();
    //reverse column wise
    for(int j=0;j<n;j++)
    {
        int start=0,end=n-1;
        while(start<end)
        {
            swap(matrix[start][j],matrix[end][j]);
            start++;
            end--;
        }
    }

    //row wise reverse
    for(int i=0;i<n;i++)
    {
        int start=0,end=n-1;
        while(start<end)
        {
            swap(matrix[i][start],matrix[i][end]);
            start++;
            end--;
        }
    }
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

    rotateBy180(matrix);
     cout << "after rotate matrix .by 180" << endl;
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