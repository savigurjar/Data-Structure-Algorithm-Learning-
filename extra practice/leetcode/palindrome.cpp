#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        return 0;
    }
    int ans = 0;
    long long v = n;
    while (n != 0)
    {
        int rem = n % 10;
        ans = (ans * 10) + rem;
        n = n / 10;
    }
    if (ans == v)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palimdrome";
    }
}