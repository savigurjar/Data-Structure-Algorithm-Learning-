#include <iostream>
using namespace std;
class Human{
   private:
   int a;
   protected:
   int b;
   public:
   int c;

//    with in class can access private protected and public
   void fun()
   {
    a = 10;
    b = 20;
    c = 30;
   }
};
int main()
{
    Human Tae;
    // Tae.a = 1;  // ❌ Error: 'a' is private in 'Human'
    // Tae.b = 1;  // ❌ Error: 'b' is protected in 'Human'
    // Tae.c = 1;  // ✅ Allowed: 'c' is public in 'Human'

    Tae.fun();
    
}