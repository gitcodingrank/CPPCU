//Example 1: Addition of two 1d array and store the result in third array.
// #include <iostream>
// #include <thread>
// using namespace std;

// void addArray(int A[], int B[], int result[], int index){
//     result[index] = A[index] + B[index];
// }

// int main(){

//     int num1[] = {1,2,3,4,5};
//     int num2[] = {6,7,8,9,10};
//     int result[5] = {0};

//     thread threads[5];

//     for(int i=0; i<5; i++){
//         threads[i] = thread(addArray, num1, num2, result, i);
//     }

//     for(auto& t: threads){
//         t.join();
//     }

//     cout <<"Result is: ";
//     for(int i=0;i<5;i++){
//         cout <<result[i]<<" ";
//     }
//     cout <<endl;

// }

//Example: 
#include <iostream>
#include <thread>
#include <vector>
using namespace std;

void addArray(const vector<int>&A, const vector<int>&B, vector<int>&result, int index){
    result[index] = A[index] + B[index];
}

int main(){

    vector<int> num1 = {1,2,3,4,5};
    vector<int> num2 = {6,7,8,9,10};
    vector<int> result(5, 0);

    vector<thread> threads;

    for(int i=0; i<5; i++){
        threads.push_back(thread(addArray, cref(num1), cref(num2), ref(result), i));
    }

    for(auto& t: threads){
        t.join();
    }

    cout <<"Result is: ";
    for(int i=0;i<5;i++){
        cout <<result[i]<<" ";
    }
    cout <<endl;

}