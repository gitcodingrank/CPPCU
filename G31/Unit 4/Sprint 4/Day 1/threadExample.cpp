
//Example 1:
// #include <iostream>
// #include <thread> //this has come c++11 version onward.
// using namespace std;

// void thread1(){
//     cout <<"Hello from thead 1"<<endl;
// }

// void thread2(){
//     cout <<"Hello from thead 2"<<endl;
// }

// //main thread
// int main(){

//     thread t1(thread1), t2(thread2);
//     t1.join(); 
//     t2.join();
//     //below code will wait unless above thread is completed/terminated properly.

//     cout <<"All threads have completed...."<<endl;


// }

//Example 2: Do increment 200000 times.

// #include <iostream>
// #include <thread> 
// using namespace std;

// int count = 0;

// void increment1(){
//     for(int i=1;i<=100000;i++){
//         count++;
//     }
// }

// void increment2(){
//     for(int i=1;i<=100000;i++){
//         count++;
//     }
// }

// //main thread
// int main(){

//     thread t1(increment1), t2(increment2);
//     t1.join(); 
//     t2.join();
//     //below code will wait unless above thread is completed/terminated properly.

//     cout <<"Count is: "<<count<<endl;


// }

//Example 3: Synchronization - mutex

// #include <iostream>
// #include <thread> 
// #include <mutex>
// using namespace std;

// int count = 0;
// mutex m;

// void increment1(){
//     for(int i=1;i<=100000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }

// void increment2(){
//     for(int i=1;i<=100000;i++){
//         m.lock();
//         count++;
//         m.unlock();
//     }
// }

// //main thread
// int main(){

//     thread t1(increment1), t2(increment2);
//     t1.join(); 
//     t2.join();
//     //below code will wait unless above thread is completed/terminated properly.

//     cout <<"Count is: "<<count<<endl;


// }


//best solution:
// #include <iostream>
// #include <thread> 
// #include <mutex>
// using namespace std;

// int count = 0;
// mutex m;

// void increment1(){
//     for(int i=1;i<=100000;i++){
//         lock_guard<mutex> guard(m);
//         count++;
//     }
// }

// void increment2(){
//     for(int i=1;i<=100000;i++){
//         lock_guard<mutex> guard(m);
//         count++;
//     }
// }

// //main thread
// int main(){

//     thread t1(increment1), t2(increment2);
//     t1.join(); 
//     t2.join();
//     //below code will wait unless above thread is completed/terminated properly.

//     cout <<"Count is: "<<count<<endl;


// }

/*
Engineer's Task
Take a global numbers array where your task is to calculate the first and second half element product by two different threads.

input: numbers = {1,2,3,4,5,6}
output:
first half product is: 6
second half product is: 120
Sum of both the half: 126 
*/


//Exmple: Thread life cycle:
#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
using namespace std;

mutex m;

void printTask() {
    m.lock();
    this_thread::sleep_for(chrono::seconds(2)); // Blocked for 2 seconds
    cout << "Thread is running..." << endl;
    m.unlock();
}

int main() {
    thread t1(printTask); // New -> Runnable -> Running
    t1.join(); // Main waits
    cout << "Thread finished." << endl; // Terminated
    return 0;
}