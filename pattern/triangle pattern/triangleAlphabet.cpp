#include <iostream>
using namespace std;

int main()
{
  int n=5;
  int m=5;
  int i,j;
  for(i=1; i<=n; i++){    // i mean Row 
    for(j=1; j<=i; j++){  // j mean col 
      cout<<(char) (i+64) <<" ";                                      
    }
    cout << endl;
  }
  return 0;
}
/*
ans is 
A 
B B 
C C C 
D D D D 
E E E E E 
*/  
// if I use "j" insted of "i" this will print A
                                          //  A B  
                                          //  A B C
//and  A= 64 ascii value, char is for convert ascii to alphabet                                          