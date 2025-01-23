#include <iostream>

using namespace std;

int main(){

    //Why Loop?
    //If i ask you to print "Hello" 10 times.
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;
    // cout <<"Hello"<<endl;

    //in above code there are following problems:
    //1. reduntand(duplicate) code
    //2. compiler will take time to compile such repeated code.
    //3. such code is harder to maintain.

    //But, loop solves all above problems.
    //Loop: it is like a tool that keeps on executing once initilalized.
    //Or in other words: Loop is used to execute same lines of code again and again until the given condition is true.

    //In th c++, we've following types of loop:
    //1. while loop
    //2. do while loop
    //3. for loop
    //4. range loop

    //while loop: keeps on executing/running block of code until the given condition is true.

    /*
    syntax:
    while(condition){
        //block of code.
    }
    
    */

//    while(true){
//        cout <<"Hello"<<endl;
//    }

   //To stop the loop, we have three important point regarding every loop:
   //1. startingPoint
   //2. where to end(condition)
   //3. jump/step in each iteration/round

   //Example: print hello 10 times

//    int sp = 1;
   
//    while(sp!=11){
//     cout <<"Hello "<<sp++<<endl;

//     //step/jump:
//     // sp+=1
//     // sp++;
//    }


//Student Task: given a number your task is to reverse it.

// int num = 12345;
// //output: 54321
// while(num!=0){
    
// cout <<num%10;
// num = num/10; //1234

// }

//Visulalization(DRY RUN):
/*
Given: num = 12345
--------------------------------
Round/Iteration 1: num!=0 ->true
                    -print(num%10) ->5
                    -num = 1234
----------
Round/Iteration 2: num!=0->true
                    -print(num%10) ->4
                    -num = 123
----------
Round/Iteration 3: num!=0 ->true
                    -print(num%10)->3
                    -num = 12
----------
Round/Iteration 4: num!=0 ->true
                    -print(num%10)->2
                    -num = 1
Round/Iteration 5: num!=0 ->true
                    -print(num%10)->1
                    -num = 0
Round/Iteration 6: num!=0 ->false -> come out of the while loop
                
*/

//do while loop: it is also used to execute same block of good again and again until the condition is true but there is one difference between while and do while loop:
//-while loop everytime checks the condition before execution.
//-do while loop doesn't check the condition in the first round/iteration and next round/iteration onward, it starts checking.

/*
Syntax:
do{
    //block of code
}
while(condition)

*/

//Exmaple: print 1 to 10

// int sp = 1;

// do{
//     cout <<sp<<endl;
//     sp++;
// }
// while(sp<=10);

// int sp1 = 11;

// while(sp1<=10){
//     cout <<sp1<<endl;
//     sp1++;
// }

// cout <<"---------------------"<<endl;

// int sp2 = 11;
// do{
//     cout <<sp2<<endl;
//     sp2++;
// }
// while(sp2<=10);

//For Loop: it executes the same block of code again and again until the condtion is true.

//Why should be choose for loop among while and do while loop?
//1. it is used when number of iterations are known.
//2. it promotes less code/clean code as compare to while and do while loop.
//3. In while and do while, we're having to write all three important(start, end, step) part at different places, but using for loop, we can write all three part at one place and can focus only on writing the main logic inside the loop.

/*
Syntax:
for(initialization/startingPoint;where to stop/endPoint;steps/jumps){
            //block of code.
}

*/

//Example: print 1 to 10 in one line using for loop.
// for(int sp=1;sp<=10;sp++){
//    cout <<sp<<" "; 
// }


//Example: Print 1 to 10 only even numbers.

//Exmaple: Print prime numbers between a and b;

for(int sp = 10;sp<=30;sp++){

    //perform prime number logic
    int count = 0;
    for(int i=1;i<=sp;i++){
        if(sp%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"Prime Number: "<<sp<<endl;
    }

}





}