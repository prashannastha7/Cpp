#include <fstream>
#include <iostream>
using namespace std;
int main () {
char name[100];
int age;
ofstream outfile; // open a file in write mode.
outfile.open("afile.txt");
cout << "Enter your name: "; 
cin.getline(name, 100);
outfile << name << endl; // write inputted data into the file.
cout << "Enter your age: "; 
cin >> age;
outfile << age << endl; // again write inputted data into the file.
outfile.close(); // close the opened file.
ifstream infile; // open a file in read mode.
infile.open("afile.txt"); 
cout << "Reading from the file" << endl; 
infile.getline(name,100); 
cout << name << endl; // write the data at the screen.
infile >> age; // again read the data from the file and display it.
cout << age << endl; 
infile.close(); // close the opened file.
return 0;
}