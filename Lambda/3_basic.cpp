#include <iostream>
using namespace std;
int main(){
  auto add =[](int x, int y){
    return x + y;
    // cout<< x + y;
  };
  // add(5, 9);
  cout << add(5,9);
  return 0;
}