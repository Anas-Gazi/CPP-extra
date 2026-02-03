#include<bits/stdc++.h>
using namespace std;
//output  5 6
// (6 5)

int main(){
  int x,y;
  cin >> x >>y;
  pair<int,int>number=make_pair(y,x); // Using make_pair to create a pair and x,y are swapped
  cout<< "("  <<number.first <<" " << number.second<<")"<<endl;
  return 0;
}
// This code reads two integers, creates a pair with the integers swapped using make_pair, and outputs the pair in the format (first second).

// Example Input:
// 5 6
// Example Output:
// (6 5)
