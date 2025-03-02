#include <iostream>
using namespace std;

class Customer
{
    string name;
    int age;
    int balance; // Added instance variable for balance
    static int total_customer;
    static int total_balance;

public:
    // Updated constructor to include balance
    Customer(string n, int a, int b)
    {
        name = n;
        age = a;
        balance = b; // Corrected balance assignment
        total_customer++;
        total_balance += balance;
    }

    // Static function to access static members
    static void accesStatic()
    {
        cout << "Total Customers: " << total_customer << endl;
    }

    // Deposit function
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
    }

    // Withdraw function
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    // Display function
    void display()
    {
        cout << "Total Customers: " << total_customer << endl;
        cout << "Total Balance: " << total_balance << endl;
        cout << "Customer Name: " << name << ", Age: " << age << ", Balance: " << balance << endl;
    }
};

// Static member initialization
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
    // Pass 3 arguments: name, age, and initial balance
    Customer A1("tae", 30, 1000);
    Customer A2("v", 12, 500);

    Customer::accesStatic(); // Correct usage of static function

    A1.display();
    A2.display();

    // Test deposit and withdraw
    A1.deposit(200);
    A2.withdraw(100);

    // cout << "\nAfter transactions:\n";
    // A1.display();
    // A2.display();

    return 0;
}
