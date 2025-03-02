#include <iostream>
using namespace std;
/*
int main()
{
    int a, b;
    cin >> a >> b;
    int c;

    // if (b == 0)
    // {
    //     cout << "divide by zero is not possible\n";
    //     return 0;
    // }
    try
    {
        if (b == 0)
        {
            throw "divide by zero is not possible";
        }
        c = a / b;
        cout << c << endl;
    }
    catch (const char *e)
    {
        cout << "Exception handling : " << e << endl;
    }


}*/

// another example
// #include <iostream>
#include <exception>

using namespace std;

int main()
{
    try
    {
        int *p = new int[100000000000000000]; // Unreasonably large allocation
        cout << "Memory allocation is successful\n";
        delete[] p;
    }
    catch (const exception &e)
    {
        cout << "Exception occurred due to line 37 : " << e.what() << endl;
    }

    return 0;
}

