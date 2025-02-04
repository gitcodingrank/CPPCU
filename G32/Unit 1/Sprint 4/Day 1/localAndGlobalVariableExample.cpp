#include <iostream>
using namespace std;

//Global Variable
int count = 0;
bool flag = true;

void increaseCount(); //Function Prototype(Declaration)
void decreaseCount(); //Function Prototype(Declaration)
void resetCount(); //Function Prototype(Declaration)
int getCount(); //Function Prototype(Declaration)
void menu(); //Function Prototype(Declaration)
void exit(); //Function Prototype(Declaration)


int main(){

  //Local Variable
  string name = "Welcome to Counter Application";
  cout <<name<<endl;
  
  while(flag){
    menu();
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1: 
        increaseCount();
        break;
    case 2:
        decreaseCount();
        break;
    case 3:
        resetCount();
        break;
    case 4:
        cout <<"Current Count is: "<<getCount()<<endl;
        break;
    case 5:
        exit();
        break;
    default:
        cout <<"Enter the valid choice"<<endl;
        break;
    }

  }
    

    // cout <<"Current Count is: "<<getCount()<<endl;
    // increaseCount();
    // increaseCount();
    // increaseCount();
    // cout <<"Current Count is: "<<getCount()<<endl;
    // decreaseCount();
    // cout <<"Current Count is: "<<getCount()<<endl;
    // resetCount();
    // cout <<"Current Count is: "<<getCount()<<endl;




}

//Definition or Body of Prototype Function:
void increaseCount(){
    count++;
}

void decreaseCount(){
    count--;
}

void resetCount(){
    count = 0;
}

int getCount(){
    return count;
}

void menu(){
    cout <<"1. Increment"<<endl;
    cout <<"2. Decrement"<<endl;
    cout <<"3. Reset"<<endl;
    cout <<"4. Get Current Count"<<endl;
    cout <<"5. Exit"<<endl;
    cout <<"Enter Your Choice: ";
}

void exit(){
    cout <<"Do you want to exit(y/n): ";
    char res;
    cin>>res;
    if(res=='y' || res=='Y'){
        flag = false;
        cout <<"Thank you for using your application!"<<endl;
    }
}