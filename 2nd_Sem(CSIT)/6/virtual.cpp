#include<iostream>
#include<conio.h>
using namespace std;

class A{
    public:
       virtual void display(){
        cout<<"This is class A"<<endl;
       }
};

class B:public A{
    public:
      void display(){
        cout<<"This is class B"<<endl;
      }
};

class C:public A{
    public:
      void display(){
        cout<<"This is class C"<<endl;
      }
};

int main(){
    A *p, a;
    B b;
    C c;
    p = &b;
    p -> display();
     p = &c;
    p -> display();
     p = &a;
    p -> display();
}