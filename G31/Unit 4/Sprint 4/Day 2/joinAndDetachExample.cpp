#include <iostream>
#include <thread>
using namespace std;

void welcome(){
    cout <<"Welcome from welcome thread.."<<endl;
}

int main(){

    thread t(welcome);
    t.detach();

    cout <<"End of main thread..."<<endl;

}

//Note: Your thread must be either join or detach.