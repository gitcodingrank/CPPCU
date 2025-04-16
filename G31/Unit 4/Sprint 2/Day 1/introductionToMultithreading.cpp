//Without Multithreading: Slow Performance, Not able to 100% utilize the cpu
// #include <iostream>
// #include <chrono>
// #include <thread>
// using namespace std;

// void downloadA() {
//     cout << "Downloading File A...\n";
//     this_thread::sleep_for(chrono::seconds(3)); //will take three seconds of time
//     cout << "File A downloaded\n";
// }

// void downloadB() {
//     cout << "Downloading File B...\n";
//     this_thread::sleep_for(chrono::seconds(3)); //will take three seconds of time
//     cout << "File B downloaded\n";
// }

// int main() {
//     auto start = chrono::high_resolution_clock::now();

//     downloadA(); // Runs first
//     downloadB(); // Runs after A

//     auto end = chrono::high_resolution_clock::now();
//     auto duration = chrono::duration_cast<chrono::seconds>(end - start);
//     cout << "Time Taken: " << duration.count() << " seconds\n";

//     return 0;
// }

//With Multithreading:
// #include <iostream>
// #include <chrono>
// #include <thread>
// using namespace std;

// void downloadA() {
//     cout << "Downloading File A...\n";
//     this_thread::sleep_for(chrono::seconds(3));
//     cout << "File A downloaded\n";
// }

// void downloadB() {
//     cout << "Downloading File B...\n";
//     this_thread::sleep_for(chrono::seconds(3));
//     cout << "File B downloaded\n";
// }

// int main() {
//     auto start = chrono::high_resolution_clock::now();

//     thread t1(downloadA); // Both threads run at the same time
//     thread t2(downloadB);

//     t1.join();
//     t2.join();

//     auto end = chrono::high_resolution_clock::now();
//     auto duration = chrono::duration_cast<chrono::seconds>(end - start);
//     cout << "Time Taken: " << duration.count() << " seconds\n";

//     return 0;
// }

//C-Style Multithreading Example: -> <pthread.h>
#include <pthread.h>
#include <iostream>

using namespace std;

void* task1(void* args){
    cout <<"Task1 has completed."<<endl;
    return NULL;
}

void* task2(void* args){
    cout <<"Task2 has completed."<<endl;
    return NULL;
}

int main(){ //Main Thread

    pthread_t t1,t2;
    pthread_create(&t1, NULL, task1, NULL);
    pthread_create(&t2, NULL, task2, NULL);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    
    cout <<"All Tasks have completed.."<<endl;
}
