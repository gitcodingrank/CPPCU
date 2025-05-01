//c-style multithreading - <pthread.h>

//Example 1: 
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* thread1(void* args){
//     cout <<"Hello From Thread 1"<<endl;
//     return nullptr;
// }

// void* thread2(void* args){
//     cout <<"Hello From Thread 2"<<endl;
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
    
//     pthread_create(&t1, NULL, thread1, NULL);
//     pthread_create(&t2, NULL, thread2, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"All threads have completed..."<<endl;

// }

//Example 2:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* tableOf2(void* args){
//     for(int i=1;i<=10;i++){
//         cout <<i*2<<endl;
//     }
//     cout <<"---------------------"<<endl;
//     return nullptr;
// }

// void* squareFirst10NaturalNumber(void* args){
//     for(int i=1;i<=10;i++){
//         cout <<i*i<<endl;
//     }
//     cout <<"---------------------"<<endl;
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
    
//     pthread_create(&t1, NULL, tableOf2, NULL);
//     pthread_create(&t2, NULL, squareFirst10NaturalNumber, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"All threads have completed..."<<endl;

// }


//Example 3:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// int count = 0; //resource shared to multiple threads at a time.

// void* thread1(void* args){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     return nullptr;
// }

// void* thread2(void* args){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
    
//     pthread_create(&t1, NULL, thread1, NULL);
//     pthread_create(&t2, NULL, thread2, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"Count is: "<<count<<endl;

// }

/*
Engineer's Task:
Create two function as:
arrayFirstHalfSum()
arraySecondHalfSum()

Where arrayFirstHalfSum() thread will calculate the sum of array element given globally and arraySecondHalfSum() thread will calculate the rest array element sum and print first and second half sum once all threads will complete.


*/

//Solution:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// int nums[] = {1,2,3,4,5,6,7,8};
// int sum1 = 0;
// int sum2 = 0;

// void* arrayFirstHalfSum(void* args){
//     for(int i=0;i<4;i++){
//         sum1+=nums[i];
//     }
//     return nullptr;
// }

// void* arraySecondHalfSum(void* args){
//     for(int i=4;i<8;i++){
//         sum2+=nums[i];
//     }
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
    
//     pthread_create(&t1, NULL, arrayFirstHalfSum, NULL);
//     pthread_create(&t2, NULL, arraySecondHalfSum, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"First Half Sum is: "<<sum1<<endl;
//     cout <<"Second Half Sum is: "<<sum2<<endl;
//     cout <<"Total Sum is: "<<sum1 + sum2<<endl;

// }

// //Example 4:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* printNumberTillGiven(void* args){
//     int sum = 0;
//     int value = *(int*)args;
//     for(int i=1;i<=value;i++){
//         cout <<i<<endl;
//         sum+=i;
//     }
//     void* ptr = new int(sum);
//     return ptr;
// }



// //main thread
// int main(){

//     pthread_t t1, t2;
//     int limit = 20;
    
//     pthread_create(&t1, NULL, printNumberTillGiven, &limit);
//     void* ptr;
//     pthread_join(t1, &ptr);

//     int result = *(int*)ptr;
//     cout <<"Result is: "<<result<<endl;

// }

//Example 6:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

// void* tableOf2(void* args){
//     pthread_mutex_lock(&lock);
//     for(int i=1;i<=10;i++){
//         cout <<i*2<<endl;
//     }
//     cout <<"---------------------"<<endl;
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }

// void* squareFirst10NaturalNumber(void* args){
//     pthread_mutex_lock(&lock);
//     for(int i=1;i<=10;i++){
//         cout <<i*i<<endl;
//     }
//     cout <<"---------------------"<<endl;
//     pthread_mutex_unlock(&lock);
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
    
//     pthread_create(&t1, NULL, tableOf2, NULL);
//     pthread_create(&t2, NULL, squareFirst10NaturalNumber, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"All threads have completed..."<<endl;

// }

//To get the defined behavior or actual result, we need to use synchronization tool like mutex.
