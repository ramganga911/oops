#include<bits/stdc++.h>
using namespace std;
class base{
    private:
    int data;
    protected:
    int meta;
    public:
    base(){
        data = 10;
        meta = 20;
    }
    friend void friendFunction(base &obj);
};
void friendFunction(base &obj){
    cout << obj.data<<endl;
    cout << obj.meta<<endl;
}
int main(){
    base obj1;
    friendFunction(obj1);
    return 0;
}