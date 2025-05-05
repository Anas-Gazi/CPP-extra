#include <iostream>
using namespace std;

int main()
{
  int n=5;
  int i,j;
  for(i=1; i<=n; i++){
    for(j=4; j>=n-i; j--){  // herej=4 means value start from 4
      cout<< j << " ";
    }
    cout << endl;
  }
  return 0;
}

/*
ans is 
4 
4 3 
4 3 2 
4 3 2 1 
4 3 2 1 0 
*/