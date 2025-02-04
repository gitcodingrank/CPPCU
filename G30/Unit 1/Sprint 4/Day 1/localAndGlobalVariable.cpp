#include <iostream>
using namespace std;

//Global Variable
string welcomeMsg = "Welcome to Function Programming";

void welcome(string studentName){
    cout <<welcomeMsg<<endl;
    //Local Variable
    int age = 45;
    cout <<"I'm "<<studentName<<", and inside welcome function having age as "<<age<<endl;
}

int main(){

  //Local Variable.

  string student = "Chintu";
  welcome(student);

}

