#include <iostream>
using namespace std;

/*
Student Task: 
Create an application which is responsible for below mathematical calculations:
//1. Addition -> Enter Numbers for Addition - print the result, then again ask for other operation
//2. Finding the Square of Any Number
//3. checkEven
//4. Find out the small character length in the string
//5. Find Factorila of a Number
//6. Exit

*/

int add(int a, int b);
int findSquare(int num);
int checkEven(int num);
int findCountOfSmallLetterInString(string str);
int findFactorial(int num);

void menu(){
    cout <<"1. Addition"<<endl;
    cout <<"2. Find Square"<<endl;
    cout <<"3. Check Even"<<endl;
    cout <<"4. Find Count of small letters in the string"<<endl;
    cout <<"5. Find Factorial"<<endl;
    cout <<"6. Exit"<<endl;
    cout <<"Enter Your Choice: ";
}

int main(){

    bool flag = true;
    while(flag){
        menu();
        int choice;
        cin>>choice;
        cin.ignore();
        cout <<endl;

        switch (choice)
        {
        case 1:
            int a, b;
            cout <<"Enter Two Numbers to Add: ";
            cin>>a>>b;
            cout <<"Addition is: "<<add(a,b)<<endl;
            break;
        case 6:
            char res;
            cout <<"Do you want to exit(y/n)? ";
            cin>>res;
            if(res=='Y' || res=='y'){
                flag = false;
                cout <<"Thank you for using the application"<<endl;
            }
            break;
        default:
            break;
        }

        
    }

}

int add(int a, int b){
    return a + b;
}