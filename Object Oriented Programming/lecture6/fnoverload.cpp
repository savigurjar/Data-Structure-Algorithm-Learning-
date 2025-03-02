#include <iostream>
using namespace std;
class Area
{
public:
    calculateArea(int r)
    {
        return 3.14 * r * r;
    }
    calculateArea(int l, int b)
    {
        return l * b;
    }
};
int main()
{
    Area A1, A2;
    cout<<A1.calculateArea(4);
    cout<<endl;
    cout<<A2.calculateArea(3, 4);
}