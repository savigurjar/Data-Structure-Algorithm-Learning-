#include <iostream>
using namespace std;

// Parent class
class Human
{
    string name; // Private by default, not accessible outside the class

protected:
    int age; // Accessible in derived classes

public:
    int weight; // Accessible everywhere
};

// Child class
class Student : public Human
{
    int roll_num, fees; // Private by default, not accessible outside this class

protected:
    string name;
    int age;
    int weight;

public:
    void fun(string n, int a, int w)
    {
        name = n;
        age = a;
        weight = w;
    }
    void display()
    {
        cout << name << " " << age << " " << weight << endl;
    }
};

int main()
{
    Student A;
    // A.name = "v"; // ❌ Error: 'name' is private in 'Human'

    // A.weight = 30;  // ✅ Allowed: 'weight' is public in 'Human'
    A.fun("v", 29, 63);
    A.display();
}
