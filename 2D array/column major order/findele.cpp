#include<iostream>
using namespace std;
void searchEleColMajor(int arr[][4],int row,int col,int x){
   for(int i=0;i<col;i++)
   {
    for(int j=0;j<row;j++)
    {
        if(arr[j][i]==x)
        {
            cout<<j<<" "<<i;
            return;
        }
    }
   }
   cout<<"not found";
}
int main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x;
    cin>>x;
    searchEleColMajor(arr,3,4,x);
    return 0;
}