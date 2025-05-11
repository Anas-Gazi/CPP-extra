//strcmp function compares two strings

#include <iostream>
#include <cstring> // string
using namespace std;

int main()
{
    char c1[]= "Gazi";
    char c2[]= "Anisur";

   int result =  strcmp(c1,c2);

  if(result == 0){
    cout<<"Equal\n" << endl;
  }else{
    cout << "Unequal"<<endl;
  }

       return 0;
}
// Output: Unequal