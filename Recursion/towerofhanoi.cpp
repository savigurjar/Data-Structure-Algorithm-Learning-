// #include <iostream>
// #include <cmath>
// using namespace std;

// class Solution {
//   public:
//     void toh(int n, int source, int helper, int dest) {   
//         if (n == 1) {
//             cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl;
//             return;
//         }
//         toh(n - 1, source, dest, helper);
//         cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl;
//         toh(n - 1, helper, source, dest);
//     }

//     long long towerOfHanoi(int n, int from, int to, int aux) {
//         toh(n, from, aux, to);
//         return (1LL << n) - 1;  // Faster than pow(2, n)
//     }
// };

// int main() {
//     Solution obj;
//     int n;
//     cin >> n;  // Input number of disks
//     cout << obj.towerOfHanoi(n, 1, 3, 2) << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int smallestSubWithSum(int x, vector<int>& arr) {
    int n = arr.size();
    int minLen = n + 1;  // Initialize with max possible size
    int sum = 0, left = 0;  

    for (int right = 0; right < n; right++) {
        sum += arr[right]; // Add current element to sum
        cout << "Right: " << right << ", Added: " << arr[right] << ", Sum: " << sum << endl;

        // Shrink the window from the left if sum > x
        while (sum > x) {  
            minLen = min(minLen, right - left + 1);
            cout << "  Shrinking window. Left: " << left << ", Removing: " << arr[left] 
                 << ", New Min Length: " << minLen << endl;
            sum -= arr[left]; // Remove leftmost element
            left++; // Move left pointer
        }
    }

    return (minLen == n + 1) ? 0 : minLen; // If no valid subarray found, return 0
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 0, 19};
    int x = 51;
    cout << "Smallest subarray length: " << smallestSubWithSum(x, arr) << endl;
    return 0;
}

