//Without Multithreading: 

// #include <iostream>
// #include <chrono>
// #include <thread>
// using namespace std;

// void downloadA() {
//     cout << "Downloading File A...\n";
//     this_thread::sleep_for(chrono::seconds(3)); //waiting for 3 minutes
//     cout << "File A downloaded\n";
// }

// void downloadB() {
//     cout << "Downloading File B...\n";
//     this_thread::sleep_for(chrono::seconds(3)); ////waiting for 3 minutes
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

//Creating Simple Thred:

#include <pthread.h>
#include <iostream>
using namespace std;

void* printMessage(void* arg) {
    cout << "Hello from thread!\n";
    return NULL;
}

int main() { //Main Thread

    pthread_t t1;  // thread handle (like thread ID)
    pthread_t t2;  // thread handle (like thread ID)

    pthread_create(&t1, NULL, printMessage, NULL);  // create a new thread
    pthread_create(&t2, NULL, printMessage, NULL); 
    //pthread_join(t1, NULL);
    //pthread_join(t2, NULL);

    cout << "Thread Finished\n";
}