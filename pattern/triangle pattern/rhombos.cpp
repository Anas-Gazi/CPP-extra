#include <iostream>
using namespace std;

int main()
{
 int n=5;
 int i,j;
 for(i=1; i<=n; i++){
  for(j=1; j<=n-i; j++){ // loop for spaces
  cout << " " << " ";
  }
  for(int j=1; j<=n; j++){ // for star
    cout << "*" << " ";
  }
  cout << endl;
}

 return 0;
}

/*ans is
        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * * 
*/
