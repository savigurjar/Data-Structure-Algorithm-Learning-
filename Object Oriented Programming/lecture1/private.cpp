#include <iostream>
#include <algorithm>
using namespace std;
class Student
{
private:
    string name;
    int age;

    // function setter and getter
public:
    void setname(string n)
    {
        if (n.size() == 0)
        {
            cout << "invalid name";
            return;
        }
        name = n;
    }
    void setage(int a)
    {
        if (age < 0 || age > 100)
        {
            cout << "invalid age";
            return;
        }
        age = a;
    }

    // print value getter
    void getname()
    {

        cout << name;
    }
    int getage()
    {
        return age;
    }
};

int main()
{
    Student s1;
    s1.setname("tae");
    s1.setage(29);
    s1.getname();
    cout << endl;
    cout << s1.getage();
}