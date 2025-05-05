#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=i; j++){
        if(i%2==1){    // i%2 ==0 mean alphabets. & 1 mean integer value :]
         cout <<j <<" ";    // here j is for 1 123 12345..
        }else{
          cout <<  (char)(j+64)<< " ";     // here j is for A AB ABCD ......     
        }
      }
      cout <<endl;
    }

       return 0;
}
/*output is
1 
A B 
1 2 3 
A B C D 
1 2 3 4 5 */


// if we use "i" insted of "j" it will print
// 1
// BB
// 333
// DDDD
// 55555

// try this :)

