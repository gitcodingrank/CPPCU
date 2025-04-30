#include <iostream>
#include <pthread.h>
using namespace std;

void* thread1(void* args){
    cout << "Hello from thread 1"<<endl;
    return nullptr;
}

void* thread2(void* args){
    cout << "Hello from thread 2"<<endl;
    return nullptr;
}


//main thread
int main(){

    pthread_t  t1, t2;
    pthread_create(&t1, NULL, thread1, NULL);
    pthread_join(t1, NULL);

    pthread_create(&t2, NULL, thread2, NULL);
    pthread_join(t2, NULL);


    cout <<"All thread have completed."<<endl;



}