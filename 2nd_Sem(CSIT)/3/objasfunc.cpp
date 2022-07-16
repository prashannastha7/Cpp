#include <iostream>
#include <conio.h>
using namespace std;
class distances
{
private:
    int feet, inches;

public:
    void setData(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void addDistance(distances d1, distances d2)
    { // 1foot = 12inches
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet = feet + inches / 12;
        inches = inches % 12;
    }
    void showData()
    {
        cout << "(" << feet << "," << inches << ")" << endl;
    }
};
int main()
{
    distances d1, d2, d3;
    d1.setData(5, 6);
    d2.setData(7, 8);
    d3.addDistance(d1, d2);
    cout << "d1= ";
    d1.showData();
    cout << "d2= ";
    d2.showData();
    cout << "d3= ";
    d3.showData();
    getch();
    return 0;
}