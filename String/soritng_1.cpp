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