
//c++ style mutlithreading:
// #include <iostream>
// #include <thread>
// using namespace std;

// void thread1(){
//     cout <<"Hello From thread 1"<<endl;
// }

// void thread2(){
//     cout <<"Hello From thread 2"<<endl;
// }

// int main(){

//     thread t1(thread1), t2(thread2);
//     t1.join();
//     t2.join();

//     cout <<"All threads have completed..."<<endl;

// }


//Example 2:
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

// int main(){

//     thread t1(increment1), t2(increment2);
//     t1.join();
//     t2.join();

//     cout <<"Count is: "<<count<<endl;

// }

//Example 3:
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

// int main(){

//     thread t1(increment1), t2(increment2);
//     t1.join();
//     t2.join();

//     cout <<"Count is: "<<count<<endl;

// }

/*
Student Task:
Create one numbers global array and find out the the first half element product and second half element product by different two threads.

Examples:
nums = [1,2,3,4,5,6]
First Half Element Product: 6
Second Half Element Product: 120
Both halves sum: 126 

*/


