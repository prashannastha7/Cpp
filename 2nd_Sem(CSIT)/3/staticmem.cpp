#include <iostream>
#include <conio.h>
using namespace std;
class employee
{
private:
    char name[20];

public:
    static int objectCount;
    employee()
    {
        objectCount++;
    }
    void setData()
    {
        cout << "Enter employee name: " << endl;
        cin >> name;
    }
    void getData()
    {
        cout << "Employee name: " << name << endl;
    }
};
int employee::objectCount = 0;
int main()
{
    employee e1, e2;
    e1.setData();
    e1.getData();
    e2.setData();
    e2.getData();
    cout << "Total object created= " << employee::objectCount << endl;
    getch();
    return 0;
}
