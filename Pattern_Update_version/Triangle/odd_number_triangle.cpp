#include <iostream>
using namespace std;
/*
4

1
1 3
1 3 5
1 3 5 7
*/

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
      for(int j=1; j<= i*2-1; j++){
        cout<<j++<<" ";
      }
      cout<<endl;
    }

       return 0;
}