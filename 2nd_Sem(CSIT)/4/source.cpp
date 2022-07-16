#include <iostream>
#include <conio.h>
using namespace std;
class distances
{
private:
    int feet, inch;

public:
    distances(){
    }
    distances(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void getData()
    {
        cout << "Feets=" << feet << endl
             << "Inches=" << inch << endl;
    }
};
class dist
{
private:
    int meter, centimeter;

public:
    dist(int m, int c)
    {
        meter = m;
        centimeter = c;
    }
    operator distances()
    { // routine in source class
        int f, i;
        f = meter * 3.3;
        i = centimeter * 0.4;
        f = f + i / 12;
        i = i % 12;
        return distances(f, i); // nameless temporary objects
    }
};
int main()
{
    distances d1;
    dist d2(4, 50);
    d1 = distances(d2);
    d1.getData();
    getch();
    return 0;
}