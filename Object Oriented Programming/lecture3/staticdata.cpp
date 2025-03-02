#include <iostream>
using namespace std;

class Customer
{
    string name;
    int age;
    static int total_customer; // Corrected: Added `int` before `total_customer`

public:
    Customer(string n, int a)
    {
        name = n;
        age = a;
        total_customer++; // Increment total customer count
    }

    static int getTotalCustomers() // Static function to access static data
    {
        return total_customer;
    }
};

// Define the static variable outside the class
int Customer::total_customer = 0;

int main()
{
    Customer A1("tae", 30);
    Customer A2("v", 12);

    // Access static variable through static method
    cout << "Total Customers: " << Customer::getTotalCustomers() << endl;

    return 0;
}
