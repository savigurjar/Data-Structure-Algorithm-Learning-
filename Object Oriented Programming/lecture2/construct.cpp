#include <iostream>
using namespace std;

class Customer {
    string name;
    int acc_num;
    int balance;

public:
    // Default constructor
    Customer() {
        name = "tae";
        acc_num = 7;
        balance = 30;
    }

    // Parameterized constructor
    // Customer(string name, int acc_num, int balance) {
    //     this->name = name;
    //     this->acc_num = acc_num;
    //     this->balance = balance;
    // }

    // Function to display customer details
    void display() {
        cout << name << " " << acc_num << " " << balance << endl;
    }
  

    // copy constructor
    Customer (Customer &B)
    {
        name = B.name;
    }
    // inline constuctor
    inline Customer(string a,int b,int c) : name(a),acc_num(b),balance(c) {};
};

int main() {
    Customer Ai;                 // Calls default constructor
    Customer A2("v", 30, 12);     // Calls parameterized constructor
    Customer A3("sv", 12, 30);    // Calls parameterized constructor

    Ai.display();
    A2.display();
    A3.display();
    Customer A4(A3);
    A4.display();
    // assignment operator
    Customer A5;
    A5 = A2;
    A5.display();

    return 0;
}


// If you don’t define any constructor, the compiler provides a default constructor.
// If you define any constructor, the compiler does not generate a default constructor automatically.
// If you need both default and parameterized constructors, you must define them explicitly.

// Constructor overloading is a feature in C++ where multiple constructors in the same class share the same name (the class name) but have different parameters (either in type, number, or both). The compiler differentiates between them based on the arguments passed during object creation.