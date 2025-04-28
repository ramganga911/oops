#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    string name;
    int age;
    int rollno;
    Person(string name, int age,int rollno){
        this->name = name;
        this->age = age;
        this->rollno  = rollno; 
    }
    void getDetails(){
        cout << name<<" "<<age<<" "<<rollno<<" "<<endl;
    }
    void eat(){
        cout<<"Eating"<<endl;
    }
    void sleep(){
        cout << "Sleeping\n";
    }
};
class Parent{
    public:
    int id_parent;
    friend class GFG;
};
class Child:public Parent{
    public:
    void setId(int id){
        id_parent = id;
    }
    int getId(){
        return id_parent;
    }
};
class GFG{
    public:
    void print(Parent &p){
        cout << p.id_parent <<endl;
    }

};
int main(){
    Person person1("Ram",22,141);
    person1.getDetails();
    Child obj1;
    obj1.setId(81);
    cout <<"ID :- "<<obj1.getId();

    return 0;
}