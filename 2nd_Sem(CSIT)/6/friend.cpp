//Friend function
#include<iostream>
using namespace std;

class sample{
    private:
    int a,b;
    public:
      void setData(){
        a = 20;
        b = 40;
      }
    friend float mean (sample s); 
};
float mean (sample s){
    return float(s.a+s.b)/2;
}
int main(){
    sample s;
    s.setData();
    cout<<"Mean is "<<mean(s);
    return 0;
}