#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int m=5;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
       cout <<(char) (j+96) << " " ;
      }
      cout <<endl;
    }

       return 0;
}