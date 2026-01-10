#include <iostream>
using namespace std;
/*
3
A 
A B
A B C
*/

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n; i++){ // rows 
      for(int j=1; j<=i;j++){ // columns
        cout << char(65 +j -1)<< " "; // ASCII value of A is 65
      }
      cout<<endl;
    }
       return 0;
}