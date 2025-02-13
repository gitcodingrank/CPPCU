#include <iostream>
using namespace std;

class Mobile{

    public:
    string modelName;
    double price;

    Mobile(string mn, double  p){
        modelName = mn;
        price = p;
    }

};



int main(){

//Pointer to Object
Mobile mobile1 = Mobile("Samsung Galaxy S24", 99999.99);

Mobile *ptr = &mobile1;
cout <<ptr->modelName<<endl;



}