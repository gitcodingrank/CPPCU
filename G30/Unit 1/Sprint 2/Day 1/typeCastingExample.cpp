#include <iostream>
#include <typeinfo>

using namespace std;

int main(){

    //Implicit Type Casting: Conversion from small to big data type - performed by compiler itself.

    //short <int < long < long long
    // short x = 32000;
    // int xy = x; //implicit type casting/conversion
    // cout <<x <<" "<<typeid(x).name() <<endl;
    // cout <<xy <<" "<<typeid(xy).name() <<endl;

    // float avg = 455.2311;
    // double dAvg = avg;

    //  cout <<avg <<" "<<typeid(avg).name() <<endl;
    // cout <<dAvg <<" "<<typeid(dAvg).name() <<endl;


    //Explicit Type Conversion: big to small where in this way we've lots of chances for data loss.

    // int x = 563422;
    // // short xy = (short)x; //Explicit Type Conversion

    // short xy = x; //explicit

    // cout <<x <<" "<<typeid(x).name() <<endl;
    // cout <<xy <<" "<<typeid(xy).name() <<endl;


    // char x = 'a'; //1byte
    // //int xy = (int)x; //explicit type conversion
    // int xy = x; //explicit type conversion

    // cout <<x <<" "<<typeid(x).name() <<endl;
    // cout <<xy <<" "<<typeid(xy).name() <<endl;


    // double dValue = 5634.23;
    // //int intValue = (double)dValue;
    // int intValue = dValue;

    // cout <<intValue;

    //Note: In above exmaples, we have used c-style type casting.
    //syntax: (data type)value;

    //function - style:
    //syntax: data type(value)

    //Example:
    // int value = int (7.89);
    // cout <<value;







    return 0;
}