#include<bits/stdc++.h>
using namespace std;
int main(){
  
  int x,y;
  cin>>x >>y;
  pair<int, int>Number= {x , y}; // Creating a pair using initializer list 
  swap(Number.first,Number.second); // Swapping the elements of the pair

  cout <<"("<< Number.first <<"," <<Number.second <<")"; // Output the swapped pair
  return 0;
}
// This code reads two integers, creates a pair with them, swaps the elements of the pair, and outputs the swapped pair in the format (first, second).
// Example Input:
// 3 7
// Example Output:  
// (7,3)