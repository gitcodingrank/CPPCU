#include <iostream>

using namespace std;

//global variable
int count = 0;

int add(int a, int b); //function prototype(declaration)

int main(){


    //local variable:
    //int localVariable = 45;
    

    cout <<add(45,78)<<endl;
    cout <<"Addition function Calling Count: "<<count<<endl;

    cout <<add(56,67)<<endl;
    cout <<"Addition function Calling Count: "<<count<<endl;

    cout <<add(67,90)<<endl;
    cout <<"Addition function Calling Count: "<<count<<endl;

}


//definition of add function:
int add(int a, int b){
    count++;
    return a + b;
}