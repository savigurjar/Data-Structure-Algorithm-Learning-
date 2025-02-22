#include<iostream>
using namespace std;
// 1 to n
// 1st method 
/*
void print(int num,int N)
{
    // base case
    if(num==N)
    {
        cout<<num<<endl;
        return;
    }
    cout<<num<<endl;
    print(num+1,N);
}
int main()
{
    int N;
    cin>>N;
    print(1,N);
}*/

// void print (int N)
// {   if(N==1)
// {
//     cout<<1<<endl;
//     return;
// }
//     print(N-1);
//     cout<<N<<endl;
// }
// int main()
// {
//     int N;
//       cin>>N;
//     print(N);
// }


// even
void printEven(int num,int N)
{
if(num>N)
{
    return;
}
cout<<num<<endl;
printEven(num+2,N);

}
int main()
{
    int N;
    cin>>N;
    printEven(2,N);
}
// even recursive function
void print (int N)
{   if(N==2)
{
    cout<<2<<endl;
    return;
}
    print(N-2);
    cout<<N<<endl;
}
int main()
{
    int N;
      cin>>N;
    if (N % 2 != 0) {
        cout << "Please enter an even number." << endl;
        return 0;
    }
    if (N) print(N);
    return 0;
}