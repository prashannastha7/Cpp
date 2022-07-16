#include <iostream>
#include <conio.h>
using namespace std;

class Shape //abstract class
{
protected:
    int width, height;

public:
    void setData(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area() = 0;
};

class Rectangle : public Shape { // concrete class
public:
    int area()
    {
        return width * height;
    }
};

int main(){
    Shape *s;
    Rectangle r;
    s=&r;
    s->setData(2,4);
    cout<<"Area of rectangle = "<<s->area()<<endl;
    getch();
    return 0;
}