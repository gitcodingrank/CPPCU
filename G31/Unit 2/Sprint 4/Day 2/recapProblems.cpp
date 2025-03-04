#include <iostream>
using namespace std;

int main(){

  //Taking input in 2d array using pointer.

  int nums[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9},
  };

  //syntax: *(*(arrayName + row) + column) - normal array:
  //syntax: *(*(vectorName.data() + row) + column) - vector array:

  //Accessing the elements of 2d array using pointer.
  cout << *(*(nums + 0) + 1) <<endl;
  cout << *(*(nums + 1)) <<endl;

}