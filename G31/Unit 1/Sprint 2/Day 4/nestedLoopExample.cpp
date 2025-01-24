#include <iostream>

using namespace std;

int main(){

    //Why/When Nested Loop?
    //When each iteration/round of any loop is connected to set of iterations/rounds/repeated code then in this case another loop is needed.

    //Gol Gappe Analogy:
    //30rs - 6 pcs
    //Chintu -> Kishori Lal Shop(Gol Gappe)
    // for(int chintu=1;chintu<=6;chintu++){
    //      cout<<"Chintu has done with his round: "<<chintu<<endl;
    // }

    //On Behalf of Republic Day, Kishori Lal has given one offer:
    //20rs - 6pcs
    //Chintu -> Chinki --> Chunnu --> Munnu-->Pablo:

    // for(int chintu=1;chintu<=6;chintu++){
    //      cout<<"Chintu has done with his round: "<<chintu<<endl;

    //      for(int familyMember=1;familyMember<=4;familyMember++){
    //         cout<<"Family Member "<<familyMember<<" has done with his round: "<<chintu<<endl;
    //      }

    //      cout <<"-------------------------------------------"<<endl;

    // }

    //Another Anology: Father and Son Analogy:

    // for(int father=1;father<=5;father++){
    //     cout<<"Father has started his round: "<<father<<endl;

    //    for(int son = 1;son<=5;son++){
    //         cout <<"Son has done with his round: "<<son<<endl;
    //    }

    //     cout <<"Father has finished his round: "<<father<<endl;
    // }

    //Example: 
    /*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    */

   
    // for(int father=1;father<=5;father++){

    //    for(int son = 1;son<=5;son++){
    //         cout <<son<<" ";
    //    }
    //    cout <<endl;
    // }

    /*
    1 
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    */

//    for(int father=1;father<=5;father++){

//        for(int son = 1;son<=father;son++){
//             cout <<son<<" ";
//        }
//        cout <<endl;
//     }

    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    */

    //   for(int father=1;father<=5;father++){

    //    for(int son = 1;son<=father;son++){
    //         cout <<"* ";
    //    }
    //    cout <<endl;
    // }

    /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1 
    */

    // for(int father=0;father<5;father++){

    //    for(int son = 1;son<=5-father;son++){
    //         cout <<son<<" ";
    //    }
    //    cout <<endl;
    // }

    // for(int father=5;father>=1;father--){

    //    for(int son = 1;son<=father;son++){
    //         cout <<son<<" ";
    //    }
    //    cout <<endl;
    // }

    //More About Nested Loop:
    //Nested loop is responsible to present/access the data in the tabular format(rows and columns).
    //

     /*
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1 
    */
    //outer loop: rows
    // for(int father=5;father>=1;father--){
    //     //inner loop: columns
    //    for(int son = 1;son<=father;son++){
    //         cout <<son<<" ";
    //    }
    //    cout <<endl;
    // }

     /*
    5 4 3 2 1
    5 4 3 2
    5 4 3
    5 4
    5 
    */

   //outer loop: rows
//    for(int father=1;father<=5;father++){
       
//        //inner loop: columns
//        for(int son = 5;son>=father;son--){
//             cout <<son<<" ";
//        }
//        cout <<endl;
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


    

}