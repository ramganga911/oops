#include<bits/stdc++.h>
using namespace std;
// Polymorphism is the ability of object to take on different forms or behave in different ways depending on the context in which they are used;
// Compile Time polymorphism Ex- Construction Overloding, Function Overloding, Operator Overloding
// Run Time Polymorphism  EX- Funtion Overriding 
// Function Overriding : Parent and child both contain the same function with different implemention 
// The parent class function is said to be overridden.
class Student{
    public:
    string name;
    Student(){
        cout << "Non Para\n";
    }
    Student(string name){
        cout <<"Para\n";
    }
    void show(){
        cout << "Parent class\n";
    }
};
class Person:public Student{
    public:
    void show(){
        cout << "Child Class\n";
    }
};
int main(){
    Student s1("Ram");
    // s1.name="Ram";
    s1.show();
    Person p1;
    p1.show();
    return 0;
}