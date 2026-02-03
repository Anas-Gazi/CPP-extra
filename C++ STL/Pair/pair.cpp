#include<bits/stdc++.h>
using namespace std;
int main(){
   //pair for single person
  //  pair<string , int> person;
  //  person.first= "bablu";
  //  person.second = 25;
  //  cout<< person.first << " " << person.second <<endl;



   // pair for many persons
  //  int n;
  //  cout<<" Enter number of persons: ";
  //  cin>>n;

  //  pair<string, int> persons[n];
   
  //  for(int i=0; i<n; i++){
  //   string name;
  //   int age;
  //   cin >> name >> age;

  //   persons[i].first = name;
  //   persons[i].second = age;
  // }
  // cout<<"------------------"<<endl;
  // for(int i=0; i<n; i++){
    
  //   cout<< persons[i].first <<" " << persons[i].second<< endl;
  // }

   // pair of pair for many persons, for more data use tuple
     int n;
   cout<<" Enter number of persons: ";
   cin>>n;

   pair<string,pair< int, string>> persons[n];
   
   for(int i=0; i<n; i++){
    string name, location;
    int age;
    cin >> name >> age >> location;

    persons[i].first = name;
    persons[i].second.first = age;
    persons[i].second.second = location;

  }
  cout<<"------------------"<<endl;
  for(int i=0; i<n; i++){
    
    cout<< persons[i].first <<" " << persons[i].second.first<<" " <<  persons[i].second.second<<" " << endl;
  }



}

// This code demonstrates the use of pairs in C++. It first shows how to create a pair for a single person with a name and age. Then, it extends this to handle multiple persons by storing their data in an array of pairs. Finally, it illustrates the use of a pair of pairs to store more complex data (name, age, location) for multiple persons.
// Example Input:
// 2
// Alice 30 NewYork
// Bob 25 LosAngeles  
// Example Output:
// ------------------
// Alice 30 NewYork
// Bob 25 LosAngeles
