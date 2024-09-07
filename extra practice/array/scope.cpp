#include<iostream>
using namespace std;
int printSum(int n[],int nu)
{
    int sum=0;
    for(int i=0;i<nu;i++)
    {
        sum = sum + n[i];
    }
    return sum;
}

int main()
{
 
  int size;
  cin>>size;
  int n[1000];
  for(int i=0;i<size;i++)
  {
    cin>>n[i];
  }  
 int sum = printSum(n, size);
    cout << "Sum of the array elements is: " << sum << endl;
}