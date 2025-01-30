#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main(){

//   array<int, 5> nums ={1,2,3,4,5};
  
//   cout <<nums.size()<<endl;
//   cout <<nums.empty()<<endl;
//   cout <<nums.front()<<endl;
//   cout <<nums.back()<<endl;
//   cout <<nums.at(2)<<endl;


// array<float, 5> avgs;
 
// avgs.fill(5);

// for(int i=0;i<avgs.size();i++){
//     cout <<avgs[i]<<" ";
// }

//range for loop:
// for(float ele: avgs){
//     cout <<ele<<" ";
// }

// int arrs[] = {4,5,3,2,3,4};

// for(int pawan: arrs){
//     cout <<pawan<<" ";
// }

//Vector Library:

vector<int> numbers;

numbers.push_back(10);
numbers.push_back(11);
numbers.push_back(12);
numbers.push_back(13);
numbers.push_back(14);

// for(int ele: numbers){
//     cout <<ele<<" ";
// }
// cout <<endl;

// cout <<numbers.size()<<endl; //5
// numbers.pop_back();
// cout <<numbers.size()<<endl; //5
// cout <<numbers.capacity()<<endl;

// cout <<numbers.front()<<endl;
// cout <<numbers.back()<<endl;

// cout <<numbers.at(1)<<endl;
// cout <<numbers.at(4)<<endl;
// cout <<numbers.at(1)<<endl; //11
// numbers.insert(numbers.begin()+1, 100);
// cout <<numbers.at(1)<<endl; //100
cout <<numbers.capacity()<<endl; //8

numbers.resize(32, 10);

cout <<numbers.capacity()<<endl; //32

}