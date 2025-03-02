#include <iostream>
using namespace std;
class Student
{
public:
    void print()
    {
        cout << "i am student \n";
    }
};
class male
{
public:
    void maleprint()
    {
        cout << "i am male \n";
    }
};
class female
{
public:
    void femaleprint()
    {
        cout << "i am female \n";
    }
};
class Boy : public Student, public male
{
public:
    void Boyprint()
    {
        cout << "i am boy \n";
    }
};
class girl : public Student, public female
{
public:
    void girlprint()
    {
        cout << "i am girl \n";
    }
};

int main()
{
    girl G1;
    G1.girlprint();
    G1.femaleprint();
    G1.print();
  
  cout<<endl;

    Boy b1;
    b1.Boyprint();
    b1.maleprint();
    b1.print();
}