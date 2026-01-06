#include <iostream>
using namespace std;

int main()
{
              /*output:
              1 2 3 4 
              1 2 3 4 
              1 2 3 4 
              1 2 3 4 
                */
    for(int i=1;i<=4;i++){ // outer loop for rows
      for(int j=1;j<=4;j++){ // inner loop for columns
        cout << j <<" "; // print column number 1 to 4
      }
      cout << endl; // move to the next line after each row
    }
}