#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> v= {1,5,9,8,6,4,5,7};
  sort(v.begin(), v.end());
  for( auto x : v){
    cout<< x << " ";
  }
  return 0;

}

//output 1 4 5 5 6 7 8 9
//This code sorts the vector in ascending order using the default sort() function, which arranges elements from smallest to largest

