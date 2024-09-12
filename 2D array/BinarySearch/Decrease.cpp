#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//optimize o(n+log(m))
/*bool decOrderSearch(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size(), m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] >= target && target >= matrix[i][m - 1])
        {
            int start = 0, end = m - 1;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                if (matrix[i][mid] == target)
                {
                    return 1;
                }
                else if (matrix[i][mid] < target)
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
           
        }
    }
    return 0;
}*/

//more optimize o(log n*m)
bool decOrderSearch(vector<vector<int>> &matrix, int target)
{
    int n=matrix.size(),m=matrix[0].size();
    int start=0,end=n*m-1;
    int row_index,col_index,mid;
    while(start<=end)
    {
        mid = start+(end-start)/2;
        row_index = mid/m;
        col_index = mid%m;

        if(matrix[row_index][col_index]==target)
        {
            return 1;
        }
        else if(matrix[row_index][col_index]<target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return 0;
}
int main()
{
    int n, m;
    cout << "enter size of the array ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    cout << "enter element in decreasing order ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int t;
    cout << "enter target you want to find ";
    cin >> t;

    bool result = decOrderSearch(arr,  t);

    if (result)
    {
        cout << "Target found!\n";
    }
    else
    {
        cout << "Target not found.\n";
    }

    return 0;
}