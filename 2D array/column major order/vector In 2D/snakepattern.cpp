#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void snakePattern(vector<vector<int>>&matrix)
{
    int row = matrix.size(), col = matrix[0].size();
    for(int i=0;i<row;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<col;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        else
        {
            for(int j=col-1;j>=0;j--)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n , m;
    cout<<"enter row and column size ";
    cin>>n>>m;

    vector<vector<int>>matrix(n,vector<int>(m));
    cout<<"enter elemnemts in matrix ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }

    snakePattern(matrix);
    return 0;

}