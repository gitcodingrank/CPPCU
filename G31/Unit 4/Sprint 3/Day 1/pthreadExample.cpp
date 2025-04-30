//c-style multithreading....

#include <iostream>
#include <pthread.h>
using namespace std;

void* thread1(void* arg){
    cout <<"Hello from thread 1"<<endl;
    return NULL;
}

void* thread2(void* arg){
    cout <<"Hello from thread 2"<<endl;
    return NULL;
}




//main thread
int main(){

    pthread_t t1, t2;

    //register your function with thread
    pthread_create(&t1, NULL, thread1, NULL);
    
    pthread_create(&t2, NULL, thread2, NULL);
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    cout <<"All threads have completed."<<endl;

}