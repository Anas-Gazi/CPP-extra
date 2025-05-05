#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int m=5;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n-i+1; j++){
       cout << "* " ;
      }
      cout <<endl;
    }

       return 0;
}
/*ans is
* * * * * 
* * * * 
* * * 
* * 
* 
*/
/*
i+j max = n+1
j max = (n-i) +1 this will print reverse 
*/