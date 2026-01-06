#include <iostream>
using namespace std;

int main()
/*
Input a number:
6
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/
{
    int n;
    cout<< "Enter a number: " << endl;
    cin>>n;
    for(int i=1; i<=n; i++){ // outer loop for rows
      for(int j=1; j<=n-i+1; j++){ // inner loop for columns
        cout<<"* "; 
      }
      cout<< endl;
    }

       return 0;

}