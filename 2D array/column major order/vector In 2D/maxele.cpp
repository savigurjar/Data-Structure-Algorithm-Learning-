#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void maxminEle(vector<vector<int>>&arr,int n,int m)
{
    // int max = arr[0][0];
    int min = arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            // if(arr[i][j]>max)
            if(arr[i][j]<min)
            {
                // max = arr[i][j];
                min = arr[i][j];
            }
        }
    }
    // cout<<"maximum element in 2 D array "<<max<<endl;
    cout<<"minimum element in 2 D array "<<min<<endl;
}
int main()
{
    int n,m;
    cout<<"enter size";
    cin>>n>>m;

    vector<vector<int>>arr(n,vector<int>(m));
    cout<<"enter element ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    maxminEle(arr,n,m);
    return 0;
}