#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //cmath: it has some inbuilt method for maths calculation.
    //abs, floor, sprt, ceil, round, etcs;

    cout <<abs(-50)<<endl; //50
    cout <<round(4.5)<<endl; //5
    cout <<round(4.3)<<endl; //4

    cout <<floor(4.5)<<endl; //4
    cout <<ceil(4.5)<<endl; //5


    double num = 45.6789;

    //Note: c++ is extension of c language.
    printf("%.2f", num); //45.67

}