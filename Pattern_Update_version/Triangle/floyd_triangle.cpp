#include <iostream>
using namespace std;
/*
4

1
23
456
78910
*/

int main()
{
    int n;
    cin>>n;
    int a=1; // initialize a with 1 for counting numbers
    for(int i=1;i<=n; i++){ // rows 
      for(int j=1; j<=i;j++){ // columns 
        cout << a++; // print and increment a by 1
      }
      cout<<endl;
    }
       return 0;
}