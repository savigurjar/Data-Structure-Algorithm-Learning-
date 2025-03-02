#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
// int main()
// {
//     vector<int> arr(5);
//     cout << "enter the input: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }

//     // file open
//     ofstream fout;
//     fout.open("zero.txt");
//     fout << "original data\n";
//     for (int i = 0; i < 5; i++)
//     {
//         fout << arr[i] << " ";
//     }
//     fout << "\n Sorted data\n";
//     sort(arr.begin(), arr.end());
//     for (int i = 0; i < 5; i++)
//     {
//         fout << arr[i] << " ";
//     }

//     fout.close();
// }

int main()
{
    ofstream fout;
    fout.open("z1.txt");

    fout << "hello onepiece\n";
    fout << "onepiece\n";
    fout << "hii one\n";
    fout.close();

    ifstream fin;
    fin.open("z1.txt");

    string line;
    while (getline(fin, line))
    {
        cout<<line<<endl;
    }
    fin.close();
}