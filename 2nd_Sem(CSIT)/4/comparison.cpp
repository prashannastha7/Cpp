#include <iostream>
#include <conio.h>
using namespace std;
class time
{
private:
    int hrs, mins;

public:
    time(int h, int m)
    {
        hrs = h;
        mins = m;
    }
    int operator<(time t) //3<4
    {
        int ft, st; // first time and second time
        ft = hrs * 60 + mins;
        st = t.hrs * 60 + t.mins;
        if (ft < st)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    time t1(3, 55), t2(4, 20);
    if (t1 < t2)
        cout << "t1 is less than t2." << endl;
    else
        cout << "t2 is less than t1." << endl;
    getch();
    return 0;
}
