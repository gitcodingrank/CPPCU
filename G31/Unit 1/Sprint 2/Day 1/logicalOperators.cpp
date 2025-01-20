#include <iostream>

using namespace std;

int main(){

    //AND(&&): When all the conditions are true or in this all the conditions are connected/dependend to/on each other

    //Example: 
    //Print "Party" - if below conditions are true:
    /*
    isFriday - true
    isAssignmentPending - false
    lastExamPassed - true
    */

    bool isFriday = true;
    bool isAssignmentPending = false;
    bool lastExamPassed = true;

    cout << isFriday && (!isAssignmentPending) && lastExamPassed;



}