#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        if(i%2==0){      // just used 0 insted of 0
         cout <<j <<" ";
        }else{
          cout <<  (char)(j+64)<< " ";   
        }
      }
      cout <<endl;
    }

       return 0;
}

// same as previous just used 0 insted of 0
/* ans is
A 
1 2 
A B C 
1 2 3 4 
A B C D E 
*/