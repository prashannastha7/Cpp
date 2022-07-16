#include <iostream>
#include <conio.h>
using namespace std;
int &min(int &x, int &y){ //&min to return reference variable
    if (x < y)
        return x;
    else
        return y;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    min(a, b) = 0;
    cout << "a= " << a << endl<< "b= " << b;
    getch();
    return 0;
}

/* int main(){
int x=5,y=3;
int *m=min(&x,&y); //*m to store pointer variable
cout<<"Smaller Element is: "<<*m<<endl; //*m to display content in memory address m
getch();
return 0; } */