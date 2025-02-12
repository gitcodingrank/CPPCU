#include <iostream>
using namespace std;

union Data{
    int intValue;
    float floatValue;
    char charValue;
};

int main(){

  //union: It is similar to struct but any one of its member gets space in the memory. 

  Data data;
  data.intValue = 45;

  cout <<data.intValue<<endl; //45
  data.floatValue = 45.99;

  cout <<data.intValue<<endl; //45
  cout <<data.floatValue<<endl; //45.99

}