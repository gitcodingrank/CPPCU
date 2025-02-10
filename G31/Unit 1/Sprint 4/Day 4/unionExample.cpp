#include <iostream>
using namespace std;


union Data
{
    int intValue;
    float floatValue;
    char charValue;
};




int main(){

  //union
  Data data1;
  data1.intValue = 456;
  cout <<data1.intValue<<endl;

  data1.floatValue = 45.99;
  cout <<data1.floatValue<<endl; //45.99
  cout <<data1.intValue<<endl; //No

}