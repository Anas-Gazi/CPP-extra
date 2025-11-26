#include<algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main(){
  int number=12;
  auto isEven = [](int x){
    return x%2 ==0;
  };
  if(isEven(number)){
    cout<< number<< " Even";

  }else{
    cout<< number<< " Odd";
  }
  return 0;
}