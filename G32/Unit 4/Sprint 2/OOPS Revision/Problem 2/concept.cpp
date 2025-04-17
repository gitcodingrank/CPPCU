//Virtual Base Class:

#include <iostream>
using namespace std;

class Teacher{
    public:
    void show(){
        cout <<"Showing Data from Teachar class show method"<<endl;
    }
};

class A: virtual public Teacher{};
class B: virtual public Teacher{};

class C: public A, public B{};

int main(){

    C *c = new C();
    c->show();


}