#include <iostream>
#include <vector>
using namespace std;

// Function to search in a row and column sorted matrix
bool rSortedCSearch(const vector<vector<int>>& matrix, int n, int m, int target) {
    int i = 0, j = m - 1; // Start from the top-right corner

    while (i < n && j >= 0) {
        if (matrix[i][j] == target) {
            return true; // Target found
        } else if (matrix[i][j] < target) {
            i++; // Move down
        } else {
            j--; // Move left
        }
    }
    return false; // Target not found
}

int main() {
    int n, m;
    cout << "Enter size of the array (rows and columns): ";
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));
    cout << "Enter elements in row sorted order and column sorted order:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int t;
    cout << "Enter the target you want to find: ";
    cin >> t;

    bool result = rSortedCSearch(arr, n, m, t);

    if (result) {
        cout << "Target found!\n";
    } else {
        cout << "Target not found.\n";
    }

    return 0;
}
