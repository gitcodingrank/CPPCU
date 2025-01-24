#include <iostream>

using namespace std;

int main(){

    //
    /*
    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4
    5


    5 4 3 2 1
      5 4 3 2
        5 4 3
          5 4
            5


    **********
    *        *
    *        *
    *        *
    *        *
    *        *
    *        *
    *        *
    *        *
    **********


    1 2 3 4 5
    2 4 6 8 10
    3 6 9 12 15
    4 8 12 16 20
    5 10 15 20 25  
                
    */
   //Nested Loop: When each iteration/round of any loop is connected to set of iterations/rounds/repeated code then in this case we need another loop inside a loop.

   //Analogy: Father and Son Analogy:

//    for(int father=1;father<=5;father++){
//     cout <<"Father has started his round: "<<father<<endl;

//         for(int son=1;son<=5;son++){
//             cout<<"Son has completed his round: "<<son<<endl;
//         }

//     cout <<"Father has completed his round: "<<father<<endl;
//     cout <<"---------------------------------------"<<endl;

//    }

        /*  
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5

        */


    // for(int father=1;father<=5;father++){

    //     for(int son=1;son<=5;son++){
    //         cout<<son<<" ";
    //     }
    //     cout <<endl;

    // }

    /*
    1 
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    
    */

//    for(int father=1;father<=5;father++){

//         for(int son=1;son<=father;son++){
//             cout<<son<<" ";
//         }
//         cout <<endl;

//     }

/*
    **********
    *        *
    *        *
    *        *
    *        *
    *        *
    *        *
    *        *
    *        *
    **********
*/

//    for(int father=1;father<=10;father++){

//         for(int son=1;son<=10;son++){
//             if(father==1 || father==10 || son== 1 || son==10 ){
//                 cout <<"* ";
//             }else{
//                 cout <<"  ";
//             }
//         }
//         cout <<endl;

//     }

//More About Nested Loop: we use this to present/access/get the data in tabular format(rows/columns).
//Outer loop: rows
//Inner loop: column

/*
Student Task 1:

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25 

Student Task 2:
    5 4 3 2 1
      5 4 3 2
        5 4 3
          5 4
            5

Student Task 3:
Month 1: 1 2 3 4 .....31
Month 2: 1 2 3 4 .....28
Month 3: 1 2 3 4 .....31
Month 4: 1 2 3 4 .....30
|
|
Month 12: 1 2 3 4......31

*/


}