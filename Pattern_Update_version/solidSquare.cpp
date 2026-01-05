#include <iostream>
using namespace std;

int main()
{
/* output 4*4
* * * * 
* * * * 
* * * * 
* * * *  
*/
    for(int i=1;i<=4;i++){ // outer loop for rows
      for(int j=1;j<=4;j++){ // inner loop for columns
        cout<<"* ";
      }
      cout<<endl; // move to the next line after each row
    }

       return 0;

}
