#include <iostream>

using namespace std;

int main(){

    //Why Loop?
    //If i ask you to print "Hello" 10 times.
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;
    // cout<<"Hello"<<endl;

    //there are following problems with above code:
    //1. lengthy code: harder to maintain
    //2. redundancy(duplicacy): there are repeated statement in your program.
    //3. your compiler will take time to execute this kind of code.

    //Loop: loop solves all above problems where it keeps on executing block of code again and again until the given condition is true.


    //There are following types of loop in c++:
    //1. while loop:
    //2. do while loop:
    //3. for loop:
    //4. range(enhanced) loop

    //1. while loop: fundamental task is to execute block of code again and again until the given condition is true.
    //when to use: when number of rounds/iterations are not known.

    /*
    Sytnax:
    while(condition){
        //block of code when condtion is true
    }    
    
    */

   //Example: print "Hello" 10 times.

//    while(true){
//         cout<<"Hello"<<endl;
//    }

//to stop the particular, there are three important points about each loop:
//1. startingPoint(Where to start)
//2. endPoint(Where to stop/end)
//3. steps/jumps(How many steps/jumps after each round.)


//Example: print "Hello" 10 times.

    // int sp = 1;

    // while(sp<=10){
    //     cout<<"Hello "<<sp++<<endl;

    //     //steps/jumps
    //     // sp = sp + 1;
    //     // sp+=1;
    //     // sp++;
    // }

    //Student Task: You've given an integer number, and your task is to reverse it.

    // int num = 12345;
    //output: 54321

    // int lastDigit1 = num%10; //5
    // cout<<lastDigit1<<endl; //5
    // num = num/10; //1234

    // int lastDigit2 = num%10; //4
    // cout<<lastDigit2<<endl; //4
    // num = num/10; //123

    //  int lastDigit3 = num%10; //3
    // cout<<lastDigit3<<endl; //3
    // num = num/10; //12

    // int lastDigit4 = num%10; //2
    // cout<<lastDigit4<<endl; //2
    // num = num/10; //1

    // int lastDigit5 = num%10; //1
    // cout<<lastDigit5<<endl; //1
    // num = num/10; //0


    // int num = 12345;

    // while(num!=0){
    //     int lastDigit1 = num%10; //5
    //     cout<<lastDigit1<<" "; //5
    //     num = num/10; //1234 -< reassignment/replacement
    // }

//Note: Start doing DRY RUN(Visualization)
/*
Given: num = 12345

Round/Iteration 1: num!=0 -> true
                    -lastDigit = 5
                    -print -> 5
                    -num -> 1234
Round/Iteration 2: num!=0 -> true
                    -lastDigit = 4
                    -print -> 4
                    -num -> 123
Round/Iteration 3: num!=0 -> true
                    -lastDigit = 3
                    -print -> 3
                    -num -> 12
Round/Iteration 4: num!=0 -> true
                    -lastDigit = 2
                    -print -> 2
                    -num -> 1
Round/Iteration 5: num!=0 -> true
                    -lastDigit = 1
                    -print -> 1
                    -num -> 0
Round/Iteration 6: num!=0 -> false -> out of while loop
*/

//do while loop: fundamental task is to execute block of code again and again until the given condition is true.
//What is the difference between while and do while loop?
//while -> first checks the condition before running the code inside it.
//do while-> It doesn't check the condition first time then second time onwards it starts checking condition.


/*
Syntax:
do{
    //block of code
}
while(condition)

*/

//Example: print 1 to 10 using do while loop

// int sp1 = 1;
// do{
//     cout <<"Hello "<<sp1<<endl;
//     sp1++;
// }
// while(sp1<=10);

//Example: to understand difference

// int sp1 = 11;
// do{
//     cout <<"Hello "<<sp1<<endl;
//     sp1++;
// }
// while(sp1<=10);

// cout <<"---------------------------------------------"<<endl;

// int sp2 = 11;
// while(sp2<=10){
//     cout<<"Hello "<<sp2<<endl;
//     sp2++;
// }

//For loop: Why is it good among other loops like while and do-while
//1. it promotes less/clean code as compare to while and do while
//2. when to use: when number of iterations are known.
//3. it uses all three imporant parts(start, end, step/jumps) of loop at once place so that we can focus on main logic to write inside its body.

/*
Syntax:

for(initialization/startingPoint;endPoint;steps/jumps){
    //block of code when condition is true.
}


*/

//Example 1: print hello loop 10 times.

//using while loop:
int i = 1;
while(i!=11){
    cout <<"Hello While: "<<i<<endl;
    i++;
}

cout<<"-----------------------------"<<endl;
//using do-while loop:
int j = 1;
do{
    cout <<"Hello Do-While: "<<j<<endl;
    j++;
}
while(j!=11);

cout<<"-----------------------------"<<endl;

//using for loop:
for(int k=1;k<=10;k++){
    cout <<"Hello For: "<<k<<endl;
}


}