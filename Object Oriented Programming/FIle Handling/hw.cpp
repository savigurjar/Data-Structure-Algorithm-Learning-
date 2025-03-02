#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr(5);
    cout << "Enter input: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // Write original data to file
    ofstream fout("z.txt");
    fout << "Original data:\n";
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }
    fout.close(); // Close file before reading

    // Read data from file
    ifstream fin("z.txt");
    if (!fin) 
    {
        cout << "Error opening file for reading\n";
        return 1;
    }

    string line;
    while (getline(fin, line)) 
    {
        cout << line << endl;
    }
    fin.close(); // Close file after reading

    // Sort the array
    sort(arr.begin(), arr.end());

    // Reopen file in append mode and write sorted data
    fout.open("z.txt", ios::app);
    fout << "\nSorted array:\n";
    for (int i = 0; i < 5; i++)
    {
        fout << arr[i] << " ";
    }
    fout.close();

    return 0;
}
