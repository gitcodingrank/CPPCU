#include <iostream>
using namespace std;

enum UserType{
    STUDENT,
    ADMIN,
    SUPERADMIN,
    USER
};

struct User{
    UserType type;
    string name;
    int marks;

};

int main(){

 //enum: 
 UserType userType = STUDENT;
 cout<<userType<<endl;

}