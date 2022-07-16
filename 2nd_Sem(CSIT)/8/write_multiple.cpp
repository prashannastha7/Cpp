#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int roll;
    char name[20];
    char address[50];

public:
    void setData()
    {
        cout << "Enter roll:" << endl;
        cin >> roll;
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter address:" << endl;
        cin >> address;
    }
    void getData()
    {
        cout << "Roll:" << roll << endl
             << "Name:" << name << endl
             << "Address:" << address << endl;
    }
};
int main()
{
    student s;
    ofstream fout;
    fout.open("D:\\student.txt");
    for (int i = 0; i < 5; i++)
    {
        s.setData();
        fout.write((char *)&s, sizeof(student));
    }
    fout.close();
    cout << "Write completed." << endl;
    return 0;
}