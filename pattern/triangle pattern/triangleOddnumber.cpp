#include <iostream>
using namespace std;

int main()
{
 int n=5;
 int i,j;
 for(i=1; i<=n; i++){
  for(j=1; j<=i; j++){
  cout << 2*j-1 << " ";
  }
  cout << endl;
 }

 return 0;
}
/* ans is 
1 
1 3 
1 3 5 
1 3 5 7 
1 3 5 7 9 
*/