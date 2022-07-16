#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
    int eid, salary;

public:
    void setData()
    {
        cout << "Enter employee id and salary:" << endl;
        cin >> eid >> salary;
    }
    void getData()
    {
        cout << "Employee ID=" << eid << endl<< "Employee salary=" << salary << endl;
    }
};
class Company
{ // company has an employee relationship
    int cid;
    string cname;
    Employee e;

public:
    void setData()
    {
        cout << "Enter company id and name:" << endl;
        cin >> cid >> cname;
        e.setData();
    }
    void getData()
    {
        cout << "Company ID=" << cid << endl
             << "Company name=" << cname << endl;
        e.getData();
    }
};
int main()
{
    Company c;
    c.setData();
    c.getData();
    getch();
    return 0;
}