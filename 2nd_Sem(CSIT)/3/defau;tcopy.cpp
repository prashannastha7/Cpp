#include <iostream>
#include <conio.h>
using namespace std;
class item
{
private:
    int code, price;

public:
    item()
    { // default constructor
        code = price = 0;
    }
    item(int c, int p)
    { // parameterized constructor
        code = c;
        price = p;
    }
    item(item &x)
    { // copy constructor
        code = x.code;
        price = x.price;
    }
    void display()
    {
        cout << "Code: " << code << endl<< "Price: " << price << endl<< endl;
    }
};
int main()
{
    item a;
    item b(100, 200);
    item c(b); // copying b into c
    a.display();
    b.display();
    c.display();
    getch();
    return 0;
}