#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  cin >>n;
  int x,y;
  pair<int, int>arr[n];
  for(int i=0; i<n; i++){

      cin>> arr[i].first >> arr[i].second; 
  }
 for(int i=0; i<n; i++){
  cout << arr[i].first <<" " << arr[i].second <<",";
 }
 return 0;
}

// This code reads 'n' pairs of integers from input, stores them in an array of pairs, and then outputs each pair.
// Example Input:
// 3
// 1 2
// 3 4  
// 5 6
// Example Output:      
// 1 2,3 4,5 6,