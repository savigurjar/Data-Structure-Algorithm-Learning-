#include <iostream>
using namespace std;
class Human{
    public:
    string name;

    void display()
    {
        cout<<"my name is "<<name<<endl;
    }

};
class Engineer : public virtual Human
{
public:
    string specilization;
    void work()
    {
        cout << "i have specialization " << specilization << endl;
    }
};
class Youtber : public virtual Human
{
public:
    int subscriber;

    void content()
    {
        cout << "i have a subscriber base of " << subscriber << endl;
    }
};
class Codeteacher : public Engineer, public Youtber
{
public:
    // string name;
    int salary;
    Codeteacher()
    {

    }
    Codeteacher(string name, string specilization, int subscriber,int salary)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber;
        this->salary = salary;
    }

 
};
int main()
{
    Codeteacher A1("v", "music", 79,30);
    A1.display();
   

    // Codeteacher a1;
    // a1.display();
}
