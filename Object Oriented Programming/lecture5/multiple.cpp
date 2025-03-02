#include <iostream>
using namespace std;
class Engineer
{
public:
    string specilization;
    void work()
    {
        cout << "i have specialization " << specilization << endl;
    }
};
class Youtber
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
    string name;

    Codeteacher(string name, string specilization, int subscriber)
    {
        this->name = name;
        this->specilization = specilization;
        this->subscriber = subscriber;
    }

    void showcase()
    {
        cout << "my name is " << name << endl;
        work();
        content();
    }
};
int main()
{
    Codeteacher A1("v", "music", 79);
    A1.showcase();
}
