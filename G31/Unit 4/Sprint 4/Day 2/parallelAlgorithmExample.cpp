//Example 1: addting two differnt array and keep the result differnt array.

// #include <iostream>
// #include <thread>
// using namespace std;

// void addTwoArray(int index, int num1[], int num2[], int result[]){
//     result[index] = num1[index] + num2[index];
// }

// int main(){

//     int num1[] = {1,2,3,4,5};
//     int num2[] = {6,7,8,9,10};
//     int result[5] = {0}; 

//     thread threads[5];

//     for(int i=0;i<5;i++){
//         threads[i] = thread(addTwoArray, i, num1, num2, result);
//     }

//     // for(int i=0;i<5;i++){
//     //     threads[i].join();
//     // }
    
//     for(auto& t: threads){
//         t.join();
//     }

//     cout <<"Result is:";
//     for(int i=0;i<5;i++){
//         cout<<result[i]<<" ";
//     }

//     cout <<endl;

// }

//Example 2: using vector
// #include <iostream>
// #include <thread>
// #include <vector>
// using namespace std;

// void addTwoArray(int index, const vector<int>&num1, const vector<int>&num2, vector<int>&result){
//     result[index] = num1[index] + num2[index];
// }

// int main(){

//     vector<int> num1 = {1,2,3,4,5};
//     vector<int> num2 = {6,7,8,9,10};
//     vector<int> result(5, 0);

//     vector<thread> threads;

//     for(int i=0;i<5;i++){
//         threads.push_back(thread(addTwoArray, i, cref(num1), cref(num2), ref(result)));
//     }

//     // for(int i=0;i<5;i++){
//     //     threads[i].join();
//     // }
    
//     for(auto& t: threads){
//         t.join();
//     }

//     cout <<"Result is:";
//     for(int i=0;i<5;i++){
//         cout<<result[i]<<" ";
//     }

//     cout <<endl;

// }

//Example 2: Addition of 2d Array:

#include <iostream>
#include <thread>
using namespace std;

const int SIZE = 3;

void addMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE], int row){
    for(int j=0;j<SIZE;j++){
        result[row][j] = A[row][j] + B[row][j];
    }
}

int main(){

int num1[SIZE][SIZE] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int num2[SIZE][SIZE] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};

int result[SIZE][SIZE] = {};

thread threads[SIZE];

for(int i=0;i<SIZE;i++){
    threads[i] = thread(addMatrix, num1, num2, result, i);
}

for(int i=0;i<SIZE;i++){
    threads[i].join();
}

for(int i=0;i<SIZE;i++){
    for(int j=0;j<SIZE;j++){
        cout <<result[i][j]<<" ";
    }
    cout <<endl;
}

}