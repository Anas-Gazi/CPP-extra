#include <iostream>
using namespace std;
/*
4
1 3 5 7 
1 3 5 7
1 3 5 7
1 3 5 7
*/

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){ //rows
      for(int j=1; j<=n*2-1; j= j+2){ //number of odd numbers in each row
        // j=1,3,5,7...
        //j= n*2-1 because nth odd number is 2n-1
        cout<<j<<" ";
      }
      cout<<endl;
    }

       return 0;
}