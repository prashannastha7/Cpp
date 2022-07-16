#include <iostream>
#include <conio.h>
using namespace std;
class numbers
{
private:
    int a;

public:
    numbers(float x)
    {
        a = int(x);
    }
    void getData()
    {
        cout << "Value of integer=" << a << endl;
    }
};
int main()
{
    numbers n(3.8);
    n.getData();
    getch();
    return 0;
}