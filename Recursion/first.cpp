#include<iostream>
using namespace std;


/*
void fun0(int n)
{
    cout<<"hbd bdy\n";
    
}
void fun1(int n)
{
    cout<<n<<"days for bdy\n";
    fun0(0);
    
}
void fun2(int n)
{
    cout<<n<<"days for bdy\n";
    fun1(n-1);
    
}
void fun3(int n)
{
    cout<<n<<"days for bdy\n";
    fun2(n-1);
    
}
int main()
{
    int n = 3;
    // iterative approach
    // for(int i=n;i>0;i--)
    // {
    //     cout<<i<<"days left for birthday\n";
    // }
    // cout<<"happy birthday\n";

    fun3(3);
    // fun2(2);
    // fun1(1);
    // fun0(0);
}
*/

// base case
void fun0(int n)
{
    cout<<"hbd bdy\n";
    
}
void fun3(int n)
{
    
    // base case
    if(n==0)
    {
        cout<<"hbd bdy";
        return;
    }
    cout<<n<<"days for bdy\n";
    fun3(n-1);
    
}
int main()
{
    int n = 3;
    fun3(7);
}