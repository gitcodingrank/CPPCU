//Abstraction: It is another feature of object oriented programming which focuses on showing only the essential information to the user and hide the complex functionality.

//YOu can achieve Abstraction in C++ - using Abstract class
//Abstract Class: It is like a normal class but you can't create the object of this class.
//Note: It is necessary to have atleast one pure virtual function that makes a normal class a abstract class.

//Pure Virtual Function: Function without definition such functions are implemented or given definition by child classes.

#include <iostream>
using namespace std;


//normal---->abstract class---->Interface[Student Application Feature Interface]
class StudentService {
    public:
    virtual void addStudent() = 0; //pure virtual function
    virtual void showAllStudent() = 0; //pure virtual function

};

class StudentServiceImple: public StudentService{
    public:
    void addStudent() override{
        cout <<"Student addded successfully..."<<endl;
    }
    void showAllStudent() override{
        cout <<"Blow is the student Details..."<<endl;
        cout <<"Student 1:"<<endl;
        cout <<"Student 2:"<<endl;
    }
};


int main(){

    StudentService *ss = new StudentServiceImple();
    ss->addStudent();
    ss->showAllStudent();

}

/*
  
Application Student Registration 
        UI[HTML/CSS/JS] - Abstraction Layer
                    |
                Business Layer
                    |
                Data Access Layer
                    |
                   DB
*/
