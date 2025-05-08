//c++ style multithreading:
//Example 1:
// #include <iostream>
// #include <thread>
// using namespace std;

// void thread1(){
//     cout <<"Hello from thread 1"<<endl;
// }

// void thread2(){
//     cout <<"Hello from thread 2"<<endl;
// }

// int main(){

//     thread t1(thread1);
//     thread t2(thread2);

//     t1.join();
//     t2.join();

//     cout <<"All threads have completed..."<<endl;

// }

//Example 2:
#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int count = 0;
mutex m;

void increment1(int value, string name){
    for(int i=1;i<=100000;i++){
        m.lock();
        count++;
        m.unlock();
    }
        
}

void increment2(){
    for(int i=1;i<=100000;i++){
        m.lock();
        count++;
        m.unlock();
    }

}

int main(){

    thread t1(increment1, 34, "Rakesh");
    thread t2(increment2);

    t1.join();
    t2.join();

    cout <<"Count is "<<count<<endl;

}