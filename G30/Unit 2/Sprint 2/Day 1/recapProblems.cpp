#include <iostream>
using namespace std;

int main(){

  //Problem 1: Find out the following about any 2d array:
  //1. left to right diagonals
  //2. right to left diagonals

  /*
  1 2 3 4
  5 6 7 8
  9 10 11 12
  13 14 15 16 
  */

  int nums[4][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16}
  };

  //1. left to right:
  /*
  
  1     6      11      16
  00   11      22      33 
  */

  for(int i=0;i<4;i++){
    cout <<nums[i][i]<<" ";
  }

  //1. right to left:
  /*
  4    7    10   13
  03   12   21   30
  */

  cout <<endl;

  for(int i=0;i<4;i++){
    cout <<nums[i][3-i]<<" ";
  }



  

}