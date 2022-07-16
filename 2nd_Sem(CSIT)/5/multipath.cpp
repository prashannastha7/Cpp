#include <iostream>
#include <conio.h>
using namespace std;
class A
{
public:
    int a;
};
class B : virtual public A
{ // virtual keyword is used so that the grandchild class will get only one copy of parent class data members and functions.
public:
    int b;
};
class C : virtual public A
{
public:
    int c;
};
class D : public B, public C
{
public:
    int d;
};
int main()
{
    D obj;
    obj.a = 100;
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
    cout << "Value of a=" << obj.a << endl;
    cout << "Value of b=" << obj.b << endl;
    cout << "Value of c=" << obj.c << endl;
    cout << "Value of d=" << obj.d << endl;
    getch();
    return 0;
}