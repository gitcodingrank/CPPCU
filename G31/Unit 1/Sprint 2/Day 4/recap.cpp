#include <iostream>

using namespace std;

int main(){

//Problem: Print Prime Number between range:
//Prime Number: A number which is divisible by 1 and itself, such numbers has always two factors. 
//Example: 
//2: 2/1-->Yes, 2/2-->yes -> Prime Number
//4: 4/1-->Yes, 4/2-->yes, 4/3->No, 4/4--yes -> Not Prime

int a = 10;
int b = 30;

for(int num = a;num<=b;num++){

    //Round 1-> i = 10
    //Logic for prime
    int count = 0;
    for(int j=1;j<=num;j++){
        if(num%j==0){
            count++;
        }
    }
    if(count==2){
        cout <<"Prime: "<<num<<endl;
    }

}


}