//Example: Addition of two different array:

// #include <iostream>
// #include <thread>
// using namespace std;

// void addTwoArray(int A[], int B[], int result[], int index){
//     result[index] = A[index] + B[index];
// }

// int main(){

//     int num1[] = {1,2,3,4,5};
//     int num2[] = {6,7,8,9,10};
//     int result[5]  = {0};
//     //result = {7, 9, 11, 13, 15};

//     thread threads[5];

//     for(int i=0;i<5;i++){
//         threads[i] = thread(addTwoArray, num1, num2, result, i);
//     }

//     for(auto& t: threads){
//         t.join();
//     }

//     cout <<"Result array is: ";

//     for(int i=0;i<5;i++){
//         cout <<result[i]<<" ";
//     }
//     cout <<endl;

// }


//Example 2:
// #include <iostream>
// #include <thread>
// #include <vector>
// using namespace std;

// void addTwoArray(const vector<int>&A, const vector<int>&B, vector<int>&result, int index){
//     result[index] = A[index] + B[index];
// }

// int main(){

//     vector<int> num1 = {1,2,3,4,5};
//     vector<int> num2 = {6,7,8,9,10};
//     vector<int> result(5, 0);
//     //result = {7, 9, 11, 13, 15};

//     vector<thread> threads;

//     for(int i=0;i<5;i++){
//         threads.push_back(thread(addTwoArray, cref(num1),cref(num2), ref(result), i));
//     }

//     for(auto& t: threads){
//         t.join();
//     }

//     cout <<"Result array is: ";

//     for(int i=0;i<5;i++){
//         cout <<result[i]<<" ";
//     }
//     cout <<endl;

// }


//Example 3: with 2D array - addition:
#include <iostream>
#include <thread>
using namespace std;


void addMatrix(int A[3][3], int B[3][3], int result[3][3], int row){
    for(int j=0;j<3;j++){
        result[row][j] = A[row][j] + B[row][j];
    }
}

int main(){

    int size = 3;
    int matrix1[size][size] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int matrix2[size][size] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int result[size][size];
    //result = {7, 9, 11, 13, 15};

    thread threads[3];

    for(int i=0;i<size;i++){
            threads[i] = thread(addMatrix, matrix1, matrix2, result, i);
    }

    for(auto& t: threads){
        t.join();
    }

    // cout <<"Result array is: ";

    // for(int i=0;i<5;i++){
    //     cout <<result[i]<<" ";
    // }
    cout <<endl;

}
