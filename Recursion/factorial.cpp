#include<iostream>
using namespace std;
int fact(int n)
{
    // basecae
    if(n==1|| n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    // factorial of a number n
    int n;
    cin>>n;
    if(n<0)
    {
        cout<<"factorial is not possible";
        return 0;
    }
    cout<<fact(n);
}