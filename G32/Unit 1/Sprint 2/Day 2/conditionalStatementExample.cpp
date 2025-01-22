#include <iostream>

using namespace std;

int main(){

    int score = 86;
    int income = 300000;

    //without logical opeator:
    // if(score>=85){
        
    //         if(income<200000){
    //             cout <<"100% Scholership..";
    //         }else{
    //             cout <<"50% Scholership..";
    //         }
    // }
    // else{
    //     cout <<"Not Eligible for Scholership..";
    // }


    if(score>=85 && income<200000){
          cout <<"100% Scholership..";
    }
    else if(score>=85 && income>=200000){
        cout <<"50% Scholership..";
    }
    else{
        cout <<"Not Eligible for Scholership..";
    }


}