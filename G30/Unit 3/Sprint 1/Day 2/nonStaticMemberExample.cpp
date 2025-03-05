#include <iostream>
using namespace std;

/*
There are two types of member of the class:
1. Non-Static Members:
    1.1 Non-Static Variables Members(Data/States/How it looks)
    1.2 Non-Static Functions Members(Methods/Behavior/How it acts)
2. Static Member
    2.1 Static Variables Members(Data/States/How it looks)
    2.2 Static Functions Members(Methods/Behavior/How it acts)

Example: 1. Non-Static Members: These members belong to the specific object of the class.
-In the words, to access or manipulate the non-static memeber of class, we need to create the object.
*/

//non-static memeber example:

class A{

    public:
    //non-static data member
    int value;

    //non-static function member
    int getValue(){
        return value;
    }


};

int main(){

    //to Access static data member, and static function? - create the object of the class.
    // cout <<value<<endl; //can't access as they're non-static memebers

    A a1;
    a1.value = 45;
    cout <<a1.value<<endl;

    A a2;
    a2.value = 56;
    cout <<a2.value<<endl;

    cout <<a1.getValue()<<endl;
    cout <<a2.getValue()<<endl;
    

}