#include <iostream> LAB 9:
#include <conio.h>
using namespace std;
class distances
{
private:
    int feet, inch;

public:
    distances(int f, int i)
    {
        feet = f;
        inch = i;
    }
    operator float()
    { // typecast overloading
        float b = feet + inch / 12.0;
        return b;
    }
};
int main()
{
    distances d(3, 6);
    float a = float(d);
    cout << "Basic type=" << a << endl;
    getch();
    return 0;
}
