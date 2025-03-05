#include <iostream>
using namespace std;

/*
Static Memembers
    1 Static Variables Members(Data/States/How it looks)
    2 Static Functions Members(Methods/Behavior/How it acts)
    3 Static Object
Note: 
1. They belong to class not to any specific object
2. They are declared using static keyword
3. To Access Static Memeber, you can access through class name.
4. Default value for static member is 0

*/

// class B{
//     public:

//     //static data member
//     static int value;

//     //static function member:
//     static int getValue(){
//         return value;
//     }
// };

// // int B::value; //default value is 0
// int B::value = 10; //value is 10


// class FlipkartOrder{

//     public:
//     static int count;

//     FlipkartOrder(){
//         count++;
//     }

//     static int getOrderCount(){
//         return count;
//     }
// };

// int FlipkartOrder::count; //default value 0


//static function:
/*
They can only access the static member of the class and can't access the non-static memeber.

*/

// class C{
//     public:
//     string name = "Rakesh";
//     static int age;

//     static int getAge(){
//         return age;
//     }

//     string getName(){
//         cout<<"Age is: "<<age<<endl;
//         return name;
//     }

// };

// int C::age = 45;


class Test{

    public:
    static int count;
    Test(){
        count++;
    }
};

int Test::count;

void demo(){
    static Test t;
}


int main(){

  //to access the static memebers, do you need to create the objects? - No, you can access directly using class.

  //to access static member: scope resolution operator ::
//   cout <<B::value<<endl; //10

//   B b;
//   cout <<b.value<<endl; //10

//   B c;
//   cout <<c.value<<endl; //10

    // FlipkartOrder o1, o2, o3, o4, o5;
    // cout <<FlipkartOrder::count<<endl; //5
    // cout <<FlipkartOrder::getOrderCount()<<endl; //5


    // cout<<C::getAge()<<endl;
    // // cout<<C::getName()<<endl;

    // C c;
    // cout<<c.getName()<<endl;

    demo();
    demo();
    demo();
    demo();
    demo();
    demo();

    cout <<Test::count<<endl;

}