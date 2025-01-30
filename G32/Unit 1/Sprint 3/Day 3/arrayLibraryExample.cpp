#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main(){

    //array library: to use, need to #include <array>

    // array<int, 5> nums = {1,2,3,4,5};

    // cout <<nums[0]<<endl;
    // cout <<nums.at(2)<<endl;//3
    // cout <<nums.size()<<endl;//5
    // cout <<nums.front()<<endl;//1
    // cout <<nums.back()<<endl;//5
    // cout <<nums.empty()<<endl;//0

    //fill(value):

    // array<int, 5> numbers;

    // numbers.fill(10);

    // for(int i=0;i<numbers.size();i++){
    //     cout <<numbers.at(i)<<" ";
    // }

    //vector:
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(11);
    nums.push_back(12);
    nums.push_back(13);
    nums.push_back(14);
    

    // cout <<nums.size()<<endl;
    // cout <<nums.capacity()<<endl; //8
    // nums.resize(100,10);
    // cout <<nums.capacity()<<endl; //100

    //range loop
    // for(int pablo: nums){
    //     cout <<pablo<<" ";
    // }
    // nums.pop_back();
    // cout <<"--------------------"<<endl;

    // for(int pablo: nums){
    //     cout <<pablo<<" ";
    // }

    // cout <<nums.at(1)<<endl; //11
    // nums.insert(nums.begin()+1, 100);
    // cout <<nums.at(1)<<endl; //100


}