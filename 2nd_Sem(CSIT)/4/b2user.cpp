#include<iostream> LAB 8:
#include<conio.h>
using namespace std;
class distances{
private:
int feet,inch;
public:
distances(int f,int i){
feet=f;
inch=i;
}
distances(float x){
feet=int(x);
inch=12*(x-feet);
}
void getData(){
cout<<"Feets="<<feet<<endl<<"Inches="<<inch<<endl;
}
};
int main(){
distances d(2.5);
d.getData();
getch();
return 0;}