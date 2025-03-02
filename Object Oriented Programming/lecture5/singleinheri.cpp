#include <iostream>
using namespace std;
class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "i am working \n";
    }
};
class Student : public Human
{
    int roll_num, fees;

public:
    Student(string name, int age, int roll_num, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;
    }
    void display()
    {
        cout << "yo!! " << name << " age is " << age << " and your roll number is " << roll_num << " and your fees is " << fees << endl;
    }
};
int main()
{
    Student A1("Savi", 21, 304, 80000);
    A1.work();
    A1.display();
}