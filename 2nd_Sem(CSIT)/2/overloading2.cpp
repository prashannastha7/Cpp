#include <iostream>
#include <conio.h>
using namespace std;
int area(int l, int b)
{
    return l * b;
}
int area(int l)
{
    return l * l;
}
int main()
{
    int l, b;
    cout << "Enter length and breadth of rectangle: " << endl;
    cin >> l >> b;
    cout << "Area of rectangle= " << area(l, b) << endl;
    cout << "Enter length of square: " << endl;
    cin >> l;
    cout << "Area of square= " << area(l);
    getch();
    return 0;
}