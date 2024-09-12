#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> spiralForm(vector<vector<int>>&matrix,int row,int col)
{   vector<int>ans;
    int top=0,bottom=row-1,left=0,right=col-1;

    while(top<=bottom && left<=right)
    {
        //print top
        for(int j=left;j<=right;j++)
        {
           ans.push_back(matrix[top][j]);
        }
        top++;

        //print right
        for(int i=top;i<=bottom;i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;

        //print bottom
        if(top<=bottom)
        {
            for(int j=right;j>=left;j--)
            {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--;
        }

        //print left
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main()
{
    int n,m;
    cout<<"enter number of rows and column ";
    cin>>n>>m;

    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"enter elements in array ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

   vector<int>spriralOrder =  spiralForm(arr,n,m);

    cout<<" spiral form matrix "<<endl;
    for(int x : spriralOrder)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
