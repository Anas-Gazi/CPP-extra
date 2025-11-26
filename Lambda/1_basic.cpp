#include <iostream>
using namespace std;
int main(){
  auto message =[](){
    cout << "Hello World !";
  };
  message();
  return 0;
}