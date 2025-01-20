#include <iostream>
#include <typeinfo>

using namespace std;

int main(){

    //Implicit TypeCasting: smaller to larger.
    //int < double
    // int x = 45;
    // double y = x;
    // char c = 'a';

    // //Explicit Type Casting:
    // int charValue = (int)c;
    // double d = 78;
    // int dx = (int)d;


    //Good Exmaple: Explicit Type Casting:

    double personCount =123565;
    cout << personCount <<endl;
    cout << typeid(personCount).name() <<endl;

    int personCountReduce = (int)personCount;

    cout <<personCountReduce <<endl;
    cout <<typeid(personCountReduce).name() <<endl;

}