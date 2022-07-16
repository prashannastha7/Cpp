#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    int x;
};
class B
{
public:
    int x;
};
class C : public A, public B
{
};
int main()
{
    C c;
    // c.x=10; - ambiguous, will not compile
    c.A::x = 10;
    c.B::x = 20;
    cout << "Value of x in class A=" << c.A::x << endl;
    cout << "Value of x in class B=" << c.B::x << endl;
    getch();
    return 0;
}