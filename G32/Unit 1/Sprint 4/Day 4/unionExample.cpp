#include <iostream>
using namespace std;

union Data
{
    int intValue;
    float floatValue;
    char charValue;
};


int main(){

    //union: It is similar to struct only but it gets space for any of its member in the memory.

    Data data;
    data.intValue = 453;
    cout <<data.intValue<<endl; //453

    data.floatValue = 340.99;
    cout <<data.floatValue<<endl; //340.99
    cout <<data.intValue<<endl; //garbage value

}