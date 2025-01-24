#include <iostream>

using namespace std;


int main(){

   //Nested Loop: Loop inside Loop
   //Good Definition: When each iteration/round of any loop is connected to some set of iterations/rounds/repeated code then we can say in this case nesting is needed.


   //Gol Gappe Analogy:
   //20rs - 4pcs
//    for(int i=1;i<=4;i++){
//         cout <<"Chintu has done with round "<<i<<endl;
//    }

   //On behalf of Republic day, Kishori Chcha has given one offer:
   //20rs - 8pcs

   //Chintu with Siblings:
   //Chintu -> Chaman -> Munnu --> Chunnu-->Chinki

//    for(int chintu=1;chintu<=8;chintu++){
//         cout <<"Chintu has done with his round "<<chintu<<endl;

//         for(int familyMember = 1;familyMember<=4;familyMember++){
//             cout <<"Family Member "<<familyMember<< "has done with his round "<<chintu<<endl;
//         }
//         cout <<"--------------------------------------------"<<endl;
//    }

//Example: Father and Son Analogy

// for(int father = 1;father<=5;father++){
//     cout <<"Father has started his round: "<<father<<endl;

    
//     for(int son=1;son<=5;son++){
//         cout <<"Son has done with his round: "<<son<<endl;
//     }

//     cout <<"Father has finished his round: "<<father<<endl;
//     cout <<"----------------------------------------------"<<endl;
    
// }

// /*
// Fathers:
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

// */

// for(int father = 1;father<=5;father++){
        
//     for(int son=1;son<=5;son++){
//         cout <<son<<" ";
//     }
//     cout<<endl;

// }

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/


// for(int father = 1;father<=5;father++){
        
//     for(int son=1;son<=father;son++){
//         cout <<son<<" ";
//     }
//     cout<<endl;

// }

/*

*
* *
* * *
* * * *
* * * * *

*/

// for(int father = 1;father<=5;father++){
        
//     for(int son=1;son<=father;son++){
//         cout <<"* ";
//     }
//     cout<<endl;

// }

//Nest Loop: To present/manupulate the data in tabular fomat.
//Outer Loop: Rows
//Inner Loop: Columns

/*
Student Task:

Pattern Priniting:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5 

Rows: 5
*/

// for(int father = 1;father<=5;father++){
        
//     for(int son=5;son>=father;son--){
//         cout <<son<<" ";
//     }
//     cout<<endl;

// }

/*

* * * * *
* * * *
* * *
* *
*

*/

// for(int father = 1;father<=5;father++){
        
//     for(int son=5;son>=father;son--){
//         cout <<"* ";
//     }
//     cout<<endl;

// }


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





}