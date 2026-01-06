#include <iostream>
using namespace std;

int main()
{
            /* output:
                  * 
                  * * 
                  * * * 
                  * * * * 
            */
    for(int i=1;i<=4;i++){ // outer loop for rows
      for(int j=1;j<=i;j++){ // inner loop for columns
        cout<<"* "; 
      }
      cout<<endl; // move to the next line after each row
    }
       return 0;
}