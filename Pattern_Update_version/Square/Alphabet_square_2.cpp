#include <iostream>
using namespace std;
/*
A B C D 
A B C D
A B C D
A B C D
*/

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
      
      for(int j=1; j<=n; j++){
        int ch = 64+j;
        char c=ch;
        cout<<c<<" ";
      }
      cout<<endl;
    }

       return 0;
}