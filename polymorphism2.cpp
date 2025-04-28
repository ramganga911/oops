#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void display(){
        cout<<"Base class function\n";
    }
};
class Derived:public Base{
    public:
    void display(){
        cout << "Derived class function\n";
    }
};
int main(){
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display();
    return 0;
}