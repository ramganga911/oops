#include<bits/stdc++.h>
using namespace std;
//Abstraction 
// Hiding all unnecessary details & showing only the important parts
// use access modifiers to implement abstraction
class Shape{ // abstract class 
    virtual void draw()=0;// pure  virtual function
};
class Circle : public Shape{
    public:
    void draw(){
        cout << "Circle is Draw\n";
    }
};
int main(){
    Circle c1;
    c1.draw();
    return 0;
}