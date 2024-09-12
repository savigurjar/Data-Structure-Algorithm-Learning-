#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate90(vector<vector<int>>&matrix,int n)
{
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

 
}
int main()
{
    int n;
    cout<<"enter size of the array ";
    cin>>n;

    vector<vector<int>>matrix(n,(vector<int>(n)));
    cout<<"enter elements in array ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
   
   int k;
   cout<<"enter number how many times you want to rotate matrix ";
   cin>>k;

   k = k%4;

   while(k>0)
   {
    rotate90(matrix,n);
    k--;
   }

   cout<<"matrix after rotation "<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
   }
   return 0;
}