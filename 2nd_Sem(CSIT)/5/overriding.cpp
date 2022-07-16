#include<iostream>
using namespace std;

class Parent{
    public:
      void show(){
        cout<<"parents"<<endl;
      }
};
class Child:public Parent{
    public:
      void show(){
        cout<<"Child"<<endl;
      }
};

int main(){
    Child c;
    c.show();
    c.Parent::show();
}