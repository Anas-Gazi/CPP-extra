#include<bits/stdc++.h>
using namespace std;
int main(){
  // tuple<string,int,string>person;

  // cin>> get<0>(person)>> get<1>(person)>> get<2>(person);
  // cout<< get<0>(person) <<" "<< get<1>(person)<<" "<< get<2>(person)<< endl;

  int n;
  cin>>n;

  tuple<string, int, string>persons[n];

  for(int i=0; i<n; i++){
    // string name, location;
    // int age;

    cin>> get<0>(persons[i]) >> get<1>(persons[i]) >> get<2>(persons[i]);
  }
  cout<<"-----------------------------"<<endl;
   for(int i=0; i<n; i++){
    cout<< get<0>(persons[i])<<" " << get<1>(persons[i])<<" " << get<2>(persons[i])<<endl;
  }
}