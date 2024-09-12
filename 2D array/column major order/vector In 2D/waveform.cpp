#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void waveForm(vector<vector<int> >&arr,int n,int m)
{
 for(int j=0;j<m;j++)
 {
    if(j%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<arr[i][j]<<" ";
        }

    }
    
    else
    {
       
        for(int i=n-1;i>=0;i--)
        {
            cout<<arr[i][j]<<" ";
        }
    }
     cout<<endl;
 }
}
int main()
{
    int n,m;
    cout<<"enter size of the 2D array ";
    cin>>n>>m;

    vector<vector<int> >arr(n,vector<int>(m));
    cout<<"enter row and columns in aray ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    waveForm(arr,n,m);
    return 0;

}