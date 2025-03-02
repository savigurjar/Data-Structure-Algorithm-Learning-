
#include <iostream>
using namespace std;
#include <exception>
class exception
{
protected:
    string msg;

public:
    exception(string msg)
    {
        this->msg = msg;
    }
    string what()
    {
        return msg;
    }
};
int main()
{
    try
    {
        int *p = new int[1000000000000000];
        cout << "memeory allocation successfully \n";
        delete[] p;
    }
    catch (const bad_alloc &e)
    {
        cout << "Exception Occured due to line 21 : " << e.what() << endl;
    }
}