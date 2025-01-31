#include <iostream>
using namespace std;


//Declaration of function:
    void welcome(){
        cout <<"Welcome to C++ Functional Programming."<<endl;
    }


    void playMusic(){
        cout <<"ABC music has started playing..."<<endl;
    }

    void pauseMusic(){
        cout <<"ABC music has stoped playing..."<<endl;
    }

    int add(int a, int b){
        return a + b;
    }

int main(){

  //Functions: It is a block of code related to specific functionality/task.

  //Declation of function:
  /*
  return_type functionName(parameters){
      //function body - where you write some lines of code which is responsible for specific task
  }
  NoT: You always need to declare your function outside the main  function.
  */

  //Note: to use function, we need to call it by its name

//   welcome();
//   welcome();
//   welcome();
//   welcome();
//   welcome();
//   welcome();

    // playMusic();
    // pauseMusic();
    // welcome();

    //Function Parameters and Arguments:
    //Function Parameters: They are just variables for the function that we define as the time function declaration that function can only function uses inside its body.

    //Function Arguments: They are the actual/original value, you pass to the function variables/parameters at the time of calling the function.

    int result = add(34, 16); //here 34, and 16 are actual values for the function parameters where 34 will be initialized to a and 16 will be there for b.

    cout <<result<<endl;
    cout <<add(50, 10)<<endl;

    //Student Task: Write a program to print prime number between 1 to 30 where 1 and 30 are inclusive, in this program to check the prime number you can create isPrime function seperatly.

}