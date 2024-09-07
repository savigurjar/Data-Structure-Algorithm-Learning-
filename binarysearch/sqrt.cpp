#include<iostream>
#include<vector>
using namespace std;
int findSqrt(int x)
{
    int start = 0 , end = x , mid ,ans;
    if(x<2)
    {
        return x;
    }

    while(start<=end)
    {
        mid = start + (end - start)/2;
        if(mid == x/mid)
        {
           ans = mid;
           break;
        }
        else if(mid < x/mid)
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    cout<<"square root of given element "<<ans<<endl;

}
int main()
{
    int x;
    cout<<"enter element you want to find square root";
    cin>>x;

    findSqrt(x);

    return 0;
    }