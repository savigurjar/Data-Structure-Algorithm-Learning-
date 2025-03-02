#include <iostream>
#include <algorithm>
using namespace std;
class Student
{  // by default private:
public:
    string name;
    int age;
};

int main()
{
    Student s1;
    s1.name = "tae";
    s1.age = 29;

    cout << s1.name << " " << s1.age << endl;

    Student s2;
    s2.name = "v";
    cout<<s2.name;
}