#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//brute force approach
/*vector<int>twoSum(vector<int>&arr,int n,int target)
{
    vector<int>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i+1);//1based indexing
                ans.push_back(j+1);
                return ans;
            }
        }
    }
     // If no such pair is found, return an empty vector
    return ans;
}
int main()
{
  int n;
  cout<<"enter size of the array : ";
  cin>>n;

  vector<int>arr(n);
  cout<<"enter elements in array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int k;
  cout<<"enter target you want equal to index1 and index2 ";
  cin>>k;

  vector<int> result = twoSum(arr,n,k);

  if(result.empty())
  {
    cout<<" no two element sum equal to target ";
  }
  else
  {
    cout << "The indices of the elements that sum up to the target are: ";
    cout<<result[0]<<" and "<<result[1];
  }

  return 0;

}*/

//use two pointer approach
vector<int>twoSum(vector<int>&arr,int n,int target)
{
    vector<int>ans;
    int start=0,end=n-1;
    while(start<=end)
    {
        if(arr[start]+arr[end]==target)
        {
            ans.push_back(start+1);//1based indexing
            ans.push_back(end+1);
            return ans;
        }
        else if(arr[start]+arr[end]<target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return ans;
}
int main()
{
  int n;
  cout<<"enter size of the array : ";
  cin>>n;

  vector<int>arr(n);
  cout<<"enter elements in array : ";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int k;
  cout<<"enter target you want equal to index1 and index2 ";
  cin>>k;

  vector<int> result = twoSum(arr,n,k);

  if(result.empty())
  {
    cout<<" no two element sum equal to target ";
  }
  else
  {
    cout << "The indices of the elements that sum up to the target are: ";
    cout<<result[0]<<" and "<<result[1];
  }

  return 0;

}
