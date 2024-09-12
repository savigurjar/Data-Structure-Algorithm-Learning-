#include <iostream>
#include <vector>
using namespace std;
int printcol(int arr[][3], int row, int col, int x)
{
    // colum wise print
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            //    cout<<arr[i][j]<<" ";

            if (arr[i][j] == x)
            {
                cout << "yes";
                return 0;
            }
        }
    }
    cout<<"no";
}
int main()
{

    // create 2Darray
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int x;
    cout << "enter element you want to search: ";
    cin >> x;

    /* for(int i=0;i<4;i++)
     {
         for(int j=0;j<3;j++)
         {
             if(arr[i][j]==x){
                 cout<<"yes element is present at index "<<i<<" "<<j<<endl;
                 // return;
             }
         }
     }*/
    // cout<<"no";

    printcol(arr, 4, 3, x);
}