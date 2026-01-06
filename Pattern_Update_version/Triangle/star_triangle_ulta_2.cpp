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
    int a=n;
    for(int i=1; i<=n; i++){ // outer loop for rows
      for(int j=1; j<=a; j++){ // inner loop for columns 
        cout<<"* "; 
      }
      a--; // decrementing a after each row5
      cout<< endl;
    }

       return 0;

}