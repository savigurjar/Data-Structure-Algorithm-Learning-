#include <iostream>
using namespace std;
class Person
{
protected:
    string name;

    // public:
    //     void intro()
    //     {
    //         cout << "hello my name is : " << name << endl;
    //     }
};
class Employee : public Person
{
protected:
    int salary;

    // public:
    //     void monthly_salary()
    //     {
    //         cout << "My monthly salary is : " << salary << endl;
    //     }
};

class Manager : public Employee
{
public:
    string department;

public:
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    };

    void work()
    {
        cout << "hello my name is : " << name << " My monthly salary is : " << salary << " i am leading the department : " << department << endl;
    }
};
int main()
{
    Manager A1("Tae", 30, "HYBELABLE");
    // A1.intro();
    // A1.monthly_salary();
    A1.work();
}