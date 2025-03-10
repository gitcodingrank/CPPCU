//Access Modifier/Specifiers: They decide the accessibility and visibility of the class members.

//Access Modifier/Specifiers in C++ - public, private, and protected


#include <iostream>
using namespace std;

//public: accessible everywhere - within the class and outside the class as well.
//private: not accessible everywhere - they are accessible only within the class.
//protected: not accessible everywhere - They are accessible either inside the class or inside the child class(Inheritance)

class A{

    private:
    //non static private member
    string name = "Pawan";


    protected:
    int age = 45;

    public:
    //static public member
    static int value;

    void showValue(){
        cout <<name<<endl;
        cout <<value<<endl;
    }
};

int main(){

    cout <<A::value<<endl;

    

}