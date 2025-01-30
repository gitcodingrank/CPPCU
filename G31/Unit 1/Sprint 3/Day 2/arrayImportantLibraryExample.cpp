#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main(){

    //Declartion of array using array library:
    // array<int, 6> nums;
    // array<int, 6> nums = {1,2,3,4,5,6};
    
    // //method supports:
    // cout <<nums.size()<<endl;
    // cout <<nums.empty()<<endl;
    // cout <<nums.front()<<endl;
    // cout <<nums.back()<<endl;
    // cout <<nums.at(2)<<endl;


    // array<int, 5> nums;
    // nums.fill(10);

    // for(int i=0;i<nums.size();i++){
    //     cout <<nums[i]<<" ";
    // }

    //Enhance loop/range loop:
    /*
    for(type varible: arrayName){
        //here varibale will be element of array.
    }
    
    */
//    for(int ele : nums){
//     cout <<ele<<" ";
//    }

    // char chars[] = {'a', 'b', 'c', 'd'};

    // for(char ampritpal: chars){
    //     cout <<ampritpal<<" ";
    // }

    //Vector:

    vector<int> nums;

    nums.push_back(45);
    nums.push_back(56);
    nums.push_back(90);
    nums.push_back(100);
    nums.push_back(120);


    // for(int ele: nums){
    //     cout <<ele<<" ";
    // }
    // cout <<endl;
    // cout <<"-------------------"<<endl;
    // nums.pop_back();

    // for(int ele: nums){
    //     cout <<ele<<" ";
    // }

    // cout <<nums.size()<<endl;
    // cout <<nums.capacity()<<endl;

    // nums.resize(32, 200);

    // cout <<nums.capacity()<<endl;

    // cout <<nums.empty()<<endl;
    // cout <<nums.front()<<endl;
    // cout <<nums.back()<<endl;

    // cout <<nums.at(0)<<endl; //45
    // nums.insert(nums.begin(), 300);
    // cout <<nums.at(0)<<endl; //300
}