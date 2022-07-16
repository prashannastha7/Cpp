#include <iostream>
using namespace std;
class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a Vehicle." << endl;
    }
};

class Fare
{
public:
    Fare()
    {
        cout << "Fare of vehicle." << endl;
    }
};
class Car : public Vehicle
{ // hierarchical due to both Car and Bus inherits Vehicle class
};
// second sub class
class Bus : public Vehicle, public Fare
{ // multiple since Bus inherits more than one class
public:
    Bus()
    {
        cout<<"This is a Bus."<<endl;
    }
};
int main()
{
    Bus obj2;
    return 0;
}