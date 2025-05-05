#include <iostream>
using namespace std;

int main()
{
 int n=5;
 int i,j;
 for(i=1; i<=n; i++){
  for(j=1; j<=n-i+1; j++){
  cout << " " << " ";
  }
  for(j=0; j<=i; j++)
  cout << "9" << " ";
  cout << endl;
 }

 return 0;
}