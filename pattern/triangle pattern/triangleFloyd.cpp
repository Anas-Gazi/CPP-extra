#include <iostream>
using namespace std;

int main()
{
 int n=5;
 int i,j;
 int a=0;
 for(i=1; i<=n; i++){
  for(j=1; j<=i; j++){
  cout << a++ << " ";
  }
  cout << endl;
 }

 return 0;
}
/* output is 
0 
1 2 
3 4 5 
6 7 8 9 
10 11 12 13 14 
*/