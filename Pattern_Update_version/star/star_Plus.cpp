#include <iostream>
using namespace std;
/*
5
5
    *     
    *
* * * * *
    *
    *
*/

int main()
{
    int n;
    cin>>n;
    for (int i=1; i<=n; i++){ //rows
        for(int j=1; j<=n; j++){ //columns

          if(i== n/2+1 || j== n/2+1){
            cout<< "* "; // star with space
          }else{
            cout<< " " << " "; // two spaces
          }
        }
        cout << endl;
      }
       return 0;
}