#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(){
        cout << "Parent Constructor \n";
    }
    Person(string n, int a){
        this->name = n;
        this->age = a;
    }
};
class Student :public Person{
    public:
    Student(string n, int age ,int roll):Person(n,age){
        cout << "Child Constructor Student"<<endl;
    }
    void getDetails(){
        cout << name<<" "<< age<<endl;
    }
};
int main(){
    Student obj("Ram",22,141);
    

    obj.getDetails();
    return 0;
}