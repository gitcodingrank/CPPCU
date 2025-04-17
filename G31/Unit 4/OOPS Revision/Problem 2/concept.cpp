//virtual base class:

#include <iostream>
using namespace std;

class Teacher{
    public:
    void show(){
        cout <<"Showing msg from Teacher class method"<<endl;
    }
};

class A: virtual public Teacher{};
class B: virtual public Teacher{};

class C:public A, public B{
};

int main(){

    C *c = new C();
    c->show();

}

