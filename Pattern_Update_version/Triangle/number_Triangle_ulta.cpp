#include <iostream>
using namespace std;
/*
Enter number of rows: 5
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/

int main()
{
  int n;
  cout << "Enter number of rows: " ;   cin>>n;
  int a=n;
    for(int i=1;i<=n; i++){
      for(int j=1;j<=a; j++){
        cout<<j <<" ";
        
      }
      a--;
      cout<<endl;
    }

       return 0;
}