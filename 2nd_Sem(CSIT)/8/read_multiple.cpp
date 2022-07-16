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
    ifstream fin;
    fin.open("D:\\student.txt");
    for (int i = 0; i < 5; i++)
    {
        fin.read((char *)&s, sizeof(student)); // fin.seekg( sizeof(s)*2, ios::cur );-read only 3rd object from 5 objects
        s.getData();
    }
    fin.close();
    cout << "Read completed." << endl;
    return 0;
}