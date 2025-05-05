#include <iostream>
using namespace std;
int main()
{
 int n=5;
 int i,j;
 int a=0;

 int mid = n/2+1;
  for(i=1; i<=n; i++){
  for(j=1; j<=n; j++){
    // cout << "*" << " ";
  if(i==mid || j==mid) cout << "*" <<" ";
  else cout << " " <<" ";
 }
  cout << endl;
 }
 return 0;
}
/*ans is 
    *     
    *     
* * * * * 
    *     
    *    
*/