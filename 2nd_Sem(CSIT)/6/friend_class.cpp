#include <iostream>
using namespace std;

class A{
    private:
    int x;
    public:
    A(){
        x = 0;
    }
    friend class B;
};
class B{
    private:
    int b;
    public:
    void show (A a){
        cout<< "Private member of class A accessed from friend class B: " << a.x;
    }
};
int main(){
    A a;
    B b;
    b.show(a);
}