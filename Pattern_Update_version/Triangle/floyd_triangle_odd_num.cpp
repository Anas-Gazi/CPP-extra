#include <iostream>
using namespace std;
/*
4

1 
3 5
7 9 11
13 15 17 19
*/

int main()
{
    int n;
    cin>>n;
    int a=1; // initialize a with 1 for counting numbers
    for(int i=1;i<=n; i++){ // rows 
      for(int j=1; j<=i;j++){ // columns 
          cout << a << " "; // print the current odd number
          a+=2; // increment a by 2 to get the next odd number
        
      }
      cout<<endl;
    }
       return 0;
}