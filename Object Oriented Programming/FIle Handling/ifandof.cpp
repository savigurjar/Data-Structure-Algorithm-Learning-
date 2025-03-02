#include <iostream>
#include <fstream>
using namespace std;

// write
//  int main()
//  {
//      // file ko open krna
//      ofstream fout;
//      fout.open("zoom.txt"); // agr present huyi to read kr lega nhi to khud se create kr open kr dega

//     // write kr skte h
//     fout << "hello Onepiece";
//     fout.close(); //resources realse
// }

// for read
// int main()
// {
//     ifstream fin;
//     // file open kro
//     fin.open("zoom.txt");
//     // fir read kro
//     char c;
//     // fin >> c;
//     // for read space 
//     c = fin.get();
//     while (!fin.eof())
//     { // end of file
//         cout << c;
//         // fin >> c; // next char
//         c = fin.get();
//     }
//     fin.close();
// }