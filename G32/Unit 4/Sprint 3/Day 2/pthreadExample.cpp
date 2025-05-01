
//c style multithreading:

//Example 1:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* thread1(void* args){
//     cout <<"Hello from Thread 1"<<endl;
//     return nullptr;
// }

// void* thread2(void* args){
//     cout <<"Hello from Thread 2"<<endl;
//     return nullptr;
// }




// //main thread
// int main(){

//     pthread_t t1, t2;
//     pthread_create(&t1, NULL, thread1, NULL);
    
//     pthread_create(&t2, NULL, thread2, NULL);
    
//     pthread_join(t2, NULL);
//     pthread_join(t1, NULL);

//     cout <<"All threads  have completed.."<<endl;

// }

//Example 2:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* tableOf2(void* args){
//     for(int i=1;i<=10;i++){
//         cout << i*2 <<endl;
//     }
//     cout <<"------------------"<<endl;
//     return nullptr;
// }

// void* squareOfFirst10NaturalNumber(void* args){
//     for(int i=1;i<=10;i++){
//         cout << i*i <<endl;
//     }
//     cout <<"------------------"<<endl;
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
//     pthread_create(&t1, NULL, tableOf2, NULL);
    
//     pthread_create(&t2, NULL, squareOfFirst10NaturalNumber, NULL);
    
//     pthread_join(t2, NULL);
//     pthread_join(t1, NULL);

//     cout <<"All threads  have completed.."<<endl;

// }

//Example 3:

// #include <iostream>
// #include <pthread.h>
// using namespace std;

// int count = 0; //resource

// void* increment1(void* args){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     return nullptr;
// }

// void* increment2(void* args){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     return nullptr;
// }


// //main thread
// int main(){

//     pthread_t t1, t2;
//     pthread_create(&t1, NULL, increment1, NULL);
    
//     pthread_create(&t2, NULL, increment2, NULL);
    
//     pthread_join(t2, NULL);
//     pthread_join(t1, NULL);

//     cout <<"Count is: "<<count<<endl;

// }

//Example 4:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* thread1(void* args){
//     int sum = 0;
//     int x = *(int*)args;
//     for(int i=1;i<=x;i++){
//         cout << i<< endl;
//         sum+=i;
//     }
//     void* ptr = new int(sum);
//     return ptr;
// }

// //main thread
// int main(){

//     pthread_t t1;
//     int limit = 20;
//     pthread_create(&t1, NULL, thread1, &limit);

//     void* ptr;
//     pthread_join(t1, &ptr);

//     int result = *(int*)ptr;

//     cout <<"Result is: "<<result<<endl;

// }

//Example 4:
#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; //globally lock

void* tableOf2(void* args){
    pthread_mutex_lock(&lock);
    for(int i=1;i<=10;i++){
        cout << i*2 <<endl;
    }
    cout <<"------------------"<<endl;
    pthread_mutex_unlock(&lock);
    return nullptr;
}

void* squareOfFirst10NaturalNumber(void* args){
    pthread_mutex_lock(&lock);
    for(int i=1;i<=10;i++){
        cout << i*i <<endl;
    }
    cout <<"------------------"<<endl;
    pthread_mutex_unlock(&lock);
    return nullptr;
}


//main thread
int main(){

    pthread_t t1, t2;
    pthread_create(&t1, NULL, tableOf2, NULL);
    
    pthread_create(&t2, NULL, squareOfFirst10NaturalNumber, NULL);
    
    pthread_join(t2, NULL);
    pthread_join(t1, NULL);

    cout <<"All threads  have completed.."<<endl;

}

//To Prevent above race condition:
/*
Race Condition: When two or more threads are trying to access particular resource at the same time then there will be high chances of undefined behaviors the situation is known as race condition in multithreaded program.

to prevent this, we need to use synchronization technique in our code - mutex.
*/
