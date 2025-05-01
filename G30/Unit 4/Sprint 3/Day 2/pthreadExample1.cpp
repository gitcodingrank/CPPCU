//Example 1:

// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* thread1(void* agrs){
//     cout <<"Hello from thread 1"<<endl;
//     return nullptr;
// }

// void* thread2(void* agrs){
//     cout <<"Hello from thread 2"<<endl;
//     return nullptr;
// }

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

// void* tableOf2(void* agrs){
//     for(int i=1;i<=10;i++){
//         cout <<2*i<<endl;
//     }
//     cout <<"---------------"<<endl;
//     return nullptr;
// }

// void* squareOfFirst10NuturalNumber(void* agrs){
//     for(int i=1;i<=10;i++){
//         cout <<i*i<<endl;
//     }
//     cout <<"---------------"<<endl;
//     return nullptr;
// }

// int main(){

//     pthread_t t1, t2;

//     pthread_create(&t1, NULL, tableOf2, NULL);
//     pthread_create(&t2, NULL, squareOfFirst10NuturalNumber, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"All threads have completed..."<<endl;

// }


//Example 3:
// #include <iostream>
// #include <pthread.h>
// using namespace std;

// int count = 0; //resource shared to many threads
// //mutex

// void* increment1(void* agrs){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     return nullptr;
// }

// void* increment2(void* agrs){
//     for(int i=1;i<=10000;i++){
//         count++;
//     }
//     return nullptr;
// }

// int main(){

//     pthread_t t1, t2;

//     pthread_create(&t1, NULL, increment1, NULL);
//     pthread_create(&t2, NULL, increment2, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"Count is: "<<count<<endl;

// }

/*
Student Task:
Create two functions as:
arrayFirstHalfSum()
arraySecondHalfSum()

Where each function is going to calculate the sum of array element given globally and print the sum of both half seperatly once both the threads have completed.

*/


// #include <iostream>
// #include <pthread.h>
// using namespace std;

// int numbers[] = {1,2,3,4,5,6,7,8};
// int sum1 = 0;
// int sum2 = 0;

// void* arrayFirstHalfSum(void* agrs){
//     for(int i=0;i<4;i++){
//         sum1+=numbers[i];
//     }
//     return nullptr;
// }

// void* arraySecondHalfSum(void* agrs){
//     for(int i=4;i<8;i++){
//         sum2+=numbers[i];
//     }
//     return nullptr;
// }

// int main(){

//     pthread_t t1, t2;

//     pthread_create(&t1, NULL, arrayFirstHalfSum, NULL);
//     pthread_create(&t2, NULL, arraySecondHalfSum, NULL);
    
//     pthread_join(t1, NULL);
//     pthread_join(t2, NULL);

//     cout <<"First Half Sum is: "<<sum1<<endl;
//     cout <<"Second Half Sum is: "<<sum2<<endl;
//     cout <<"Total Sum: "<<(sum1+sum2)<<endl;

// }


//Example 5:




// #include <iostream>
// #include <pthread.h>
// using namespace std;

// void* printNumberTill(void* args){
//     int value = *(int*)args;
//     for(int i=1;i<=value;i++){
//         cout<<i<<endl;
//     }
//     return nullptr;
// }

// int main(){

//     pthread_t t1;
//     int limit = 20;
//     pthread_create(&t1, NULL, printNumberTill, &limit);
//     pthread_join(t1, NULL);

//     cout <<"End of Main Function"<<endl;

// }


//Preventing Undefined behaviors by multiple thread using synhchronization tool like mutex:

#include <iostream>
#include <pthread.h>
using namespace std;

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

void* tableOf2(void* agrs){
    pthread_mutex_lock(&lock);
    for(int i=1;i<=10;i++){
        cout <<2*i<<endl;
    }
    cout <<"---------------"<<endl;
    pthread_mutex_unlock(&lock);
    return nullptr;
}

void* squareOfFirst10NuturalNumber(void* agrs){
    pthread_mutex_lock(&lock);
    for(int i=1;i<=10;i++){
        cout <<i*i<<endl;
    }
    cout <<"---------------"<<endl;
    pthread_mutex_unlock(&lock);
    return nullptr;
}

int main(){

    pthread_t t1, t2;

    pthread_create(&t1, NULL, tableOf2, NULL);
    pthread_create(&t2, NULL, squareOfFirst10NuturalNumber, NULL);
    
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    cout <<"All threads have completed..."<<endl;

}
