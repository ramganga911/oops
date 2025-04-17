#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    int age;
    int rollNo;
    int x =10;
    int *ptr = &x;
    
    string name;
    Person(int x, int y, string n){
        this->age = x;
        this->rollNo = y;
        this->name = n;
    }
    void getDetails(){
        cout << name<< " "<<age<<" "<<rollNo<<endl;
    }
};
int main(){
    Person obj(22,141,"Ram");
    obj.getDetails(); 
    Person t2(obj);
    t2.getDetails();
    return 0;
}