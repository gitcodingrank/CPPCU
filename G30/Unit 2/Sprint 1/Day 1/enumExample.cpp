#include <iostream>
using namespace std;

enum UserType{
    STUDENT,
    ADMIN,
    TEACHER,
    SUPERADMIN
};


struct User{
    int userId;
    string username;
    string address;
    UserType userType;
};



int main(){

  //enum: 
  UserType user = ADMIN;
  cout <<user<<endl; //1

  //user = USER;
  //cout <<user<<endl; //3

  User user1 = {45, "pawan", "noida", STUDENT};

}