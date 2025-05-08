//join vs detach?
#include <iostream>
#include <thread>
using namespace std;

void welcome(){
    cout <<"Welcome from welcome thread..."<<endl;
}

int main(){

    thread t(welcome); 
    t.join();
    cout <<"End of main thread..."<<endl;

}