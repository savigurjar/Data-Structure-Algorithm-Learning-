#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{ int n,m;
cout<<"enter row and col ";
cin>>n>>m;
//   vector<vector<int> >matrix(3,vector<int>(4,1));
  vector<vector<int> >matrix(n,vector<int>(m));

//   for(int i=0;i<3;i++)
//   for(int j=0;j<4;j++)
//    cout<<matrix[i][j]<<" ";

// cout<<"rows = "<<matrix.size();
// cout<<endl;
// cout<<"column = "<<matrix[0].size();

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>matrix[i][j];
    }
}
cout<<endl;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}
}
