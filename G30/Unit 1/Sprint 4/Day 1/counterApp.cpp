#include <iostream>
using namespace std;

//Global Variable:
int count = 0;
bool flag = true;

void increment(); //Function Prototype(Declaration)
void decrement(); //Function Prototype(Declaration)
void reset(); //Function Prototype(Declaration)
int getCount(); //Function Prototype(Declaration)
void exit(); //Function Prototype(Declaration)
void menu(); //Function Prototype(Declaration)

int main(){

    string msg = "Welcome to Counter Application";
    
    cout <<msg<<endl;

    while(flag){
        menu();
        int choice;
        cin>>choice;

        switch (choice)
        {
        case 1:
            increment();
            break;
        
        case 2:
            decrement();
            break;
        case 3:
            cout <<"Current Count is: "<<getCount()<<endl;
            break;
        case 4:
            reset();
            break;
        case 5:
            exit();
            break;
        default:
            cout <<"Enter the Valid Choice!"<<endl;
            break;
        }

    }

}

//Function Body/Definition
void increment(){
    count++;
}

void decrement(){
    count--;
}

void reset(){
    count = 0;
}

int getCount(){
    return count;
}

void menu(){
    cout<<"1. Increment"<<endl;
    cout<<"2. Decrement"<<endl;
    cout<<"3. Get Current Count"<<endl;
    cout<<"4. Reset"<<endl;
    cout<<"5. Exit"<<endl;
    cout <<"Enter Your Choice: ";
}

void exit(){
    cout <<"Do you want to exit(y/n): ";
    char res;
    cin>>res;

    if(res=='y' || res == 'Y'){
        flag = false;
        cout <<"Thank you for using your application!";
    }
}