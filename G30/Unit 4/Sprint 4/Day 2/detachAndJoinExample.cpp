//detach and join.

#include <iostream>
#include <thread>
using namespace std;

void welcome(){
    cout <<"Welcome from welcome thread...."<<endl;
}

int main(){

    thread t(welcome);
    //t.detach(); //independenlty t thread will run and main thread will take the responsibility to execute its child thread then terminate or end.
    t.join(); //wait unless t thread is completed.
    cout <<"End of main thread."<<endl;

}

//Note: Your thread must be either join or detach.