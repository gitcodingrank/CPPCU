#include <iostream>
using namespace std;

enum TrafficLight{
    RED,
    GREEN,
    YELLOW
};

// enum UserRole{
//     USER,
//     ADMIN,
//     SUPERADMIN,
//     STUDENT
// };

int main(){

//   //Enum: 
//   TrafficLight tfl = RED;
//   cout <<tfl<<endl;

//   UserRole role = STUDENT;
//   cout<<role<<endl;

  /*
  Student Task: Create a TrafficLight Enum with RED, GREEN, AND YELLOW state, and ask the user to enter 1 for RED, 2 for GREEN, and 3 for YELLOW and according to user input show the light

  Enter 1 for RED, 2 for GREEN, and 3 for YELLOW: 1
  Light is RED
  
  */
 TrafficLight trafficLight;
 int code;
 cout <<"Enter 0. RED 1. GREEN 2. YELLOW ";
 cin>>code;

 trafficLight = (TrafficLight)code;
 cout <<trafficLight<<endl;
 
//  switch(trafficLight){
//     case 1:
//         cout <<"Red Light:- Stop!"<<endl;
//         break;
//     default:
//         cout <<"Invalid Input"<<endl;
//         break;

//  }

}