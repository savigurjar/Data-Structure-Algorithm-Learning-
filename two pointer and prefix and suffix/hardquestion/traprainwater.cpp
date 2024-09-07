#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//using extra space
/*int trapWater(int n,vector<int>&height)
{
    int leftmax[n],rightmax[n];
     leftmax[0] = height[0];;
    for(int i=0;i<n;i++)
    {
        leftmax[i] = max(leftmax[i-1],height[i]);
    }

    rightmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i] = max(rightmax[i+1],height[i]);
    }

    int water=0;
    for(int i=0;i<n;i++)
    {
        int minheight = min(leftmax[i],rightmax[i]);
        if(minheight-height[i]>=0)
        {
            water += minheight - height[i];
        }
    }
    return water;
}*/

//without using extra space
/*int trapWater(int n,vector<int>&height)
{
    int leftmax=0,rightmax=0,water=0;
    int maxheight=height[0],index=0;

    for(int i=0;i<n;i++)
    {
        if(height[i]>maxheight)
        {
            maxheight = height[i];
            index = i;
        }
    }

    //left part
    for(int i=0;i<index;i++)
    {
        if(leftmax>height[i])
        {
            water += leftmax - height[i];
        }
        else{
            leftmax = height[i];
        }
    }

    //rightpart
    for(int i=n-1;i>index;i--)
    {
      if(rightmax>height[i])
      {
        water += rightmax-height[i];
      }
      else
      {
        rightmax = height[i];
      }
    }

    return water;
}*/

//without two time traverse only one traverse 
//two pointer approach
int trapWater(int n,vector<int>&arr)
{
    if(arr.empty()) return 0;
    int start=0,end=n-1;
    int leftmax=0,rightmax=0,water=0;

    while(start<end)
    {
        if(arr[start]<arr[end])
        {
            if(arr[start]>=leftmax)
            {
                leftmax = arr[start];
            }
            else{
                water += leftmax - arr[start];
            }
            ++start;
        }

        else{
            if(arr[end]>=rightmax)
            {             
                    rightmax = arr[end];
                }
                else
                {
                    water += rightmax - arr[end];
                }
            
            end--;
        }
    }
    return water;
}
int main()
{
    int n;
    cout<<"enter size of the array ";
    cin>>n;

    vector<int>height(n);
    cout<<"enter heights in array ";
    for(int i=0;i<n;i++)
    {
        cin>>height[i];
    }

  int unit =  trapWater(n,height);
  cout<<"the total unit of water can trap "<<unit<<endl;

    return 0;
    
}