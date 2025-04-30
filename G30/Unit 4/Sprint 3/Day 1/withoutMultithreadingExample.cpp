#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void downloadA() {
    cout << "Downloading File A...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "File A downloaded\n";
}

void downloadB() {
    cout << "Downloading File B...\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "File B downloaded\n";
}

int main() {
    auto start = chrono::high_resolution_clock::now();
    
    downloadA(); // Runs first
    downloadB(); // Runs after A

    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::seconds>(end - start);
    cout << "Time Taken: " << duration.count() << " seconds\n";

    return 0;
}