#include <iostream>
using namespace std;
class Customer
{
    string name;
    int balance, account_number;

public:
    Customer(string name, int balance, int account_number)
    {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }
    // deposite
    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << amount << " rs is credited successfully\n ";
        }
        else
        {
            // cout << "amount should be greater than zero";
            // throw "amount should be greater than zero";
            throw runtime_error("amount should be greater than zero");
        }
    }
    // withdraw
    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << amount << " rs is debited successfully ";
        }
        else if (amount < 0)
        {
            // cout << "amount should be greater than zero ";
            throw "amount should be greater than zero";
        }
        // exception handling
        else
        {
            // cout << "your balance is low\n";
            throw runtime_error("your balance is low");
            // runtime_error is a class  
        }
    }
};
int main()
{
    Customer c1("tae", 30000, 12);
    try
    {
        c1.deposit(100);
        c1.withdraw(31000);
        // c1.deposit(1000); // this statement not work
    }
    // catch (const char *e)
    catch (const runtime_error &e)
    {
        // cout << "Exception Occured: " << e << endl;
        cout << "Exception Occured: " << e.what() << endl;
    }
}