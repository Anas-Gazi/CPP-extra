#include<bits/stdc++.h>
using namespace std;
int main(){
  tuple<string,int,string>person =make_tuple("Anas", 25, "Dhaka");

  // cin>> get<0>(person)>> get<1>(person)>> get<2>(person);
  cout<< get<0>(person) <<" "<< get<1>(person)<<" "<< get<2>(person)<< endl;
  return 0;
}