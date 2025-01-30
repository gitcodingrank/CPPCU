#include <iostream>
#include <vector>

using namespace std;

int main(){

    //Vector: it is a dynamic array where you don't need to think about its size at the time declaration and initialization.

    vector<int> nums;

    nums.push_back(10);
    nums.push_back(11);
    nums.push_back(12);
    nums.push_back(13);
    nums.push_back(14);
    nums.push_back(15);

    //normal for loop:
    // for(int i=0;i<nums.size();i++){
    //     cout <<nums.at(i)<<" ";
    // }
    // cout <<endl;

    //range loop for printing the element of vector:
    // for(int amp: nums){
    //     cout <<amp<<" ";
    // }

    //updating the element inside vector:

    // cout <<nums.at(1)<<endl; //11

    // nums.insert(nums.begin()+1, 100);

    // cout <<nums.at(1)<<endl; //100



}