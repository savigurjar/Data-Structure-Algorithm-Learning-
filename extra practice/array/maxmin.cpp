#include<iostream>
using namespace std;
#include<math.h>

int getMax(int num[],int n)
{
int maxi = INT16_MIN;
for(int i=0;i<n;i++)
{
    maxi = max(maxi,num[i]);
    // if(num[i]>max)
    // {
    //     max=num[i];
    // }
}
return maxi;
}
int getMin(int num[],int n)
{
int min = INT16_MAX;
for(int i=0;i<n;i++)
{
    if(num[i]<min)
    {
        min=num[i];
    }
}
return min;
}
int main(){
    
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"maximum value is "<<getMax(num,size)<<endl;
    cout<<"minimum value is "<<getMin(num,size)<<endl;
}

