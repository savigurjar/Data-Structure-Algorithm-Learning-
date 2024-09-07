#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool subarrayEqualSum(vector<int>arr)
{  int n = arr.size();
   int maxi = INT16_MIN,prefix=0,total_sum=0;
   for(int i=0;i<n;i++)
   {
    total_sum += arr[i];
   }

   for(int i=0;i<n;i++)
   {
     prefix += arr[i];
    //  int ans = total_sum-prefix;
    //  if(ans==prefix)
    //  {
    //     return 1;
    //  }
    if(total_sum==2*prefix)
    {
        return 1;
    }
   }
   return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    subarrayEqualSum(v);

    // Call the function and print the result
    if (subarrayEqualSum(v)) {
        cout << "Yes, there exists a subarray with equal sum to the remaining elements." << endl;
    } else {
        cout << "No, there does not exist such a subarray." << endl;
    }

}
