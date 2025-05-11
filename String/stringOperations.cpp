//length(), substr(), and find()

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
  string A = "Anas";
  cout<< A.length() << endl; // display length of the string
 
  A = A + " Valo";
  cout << A << endl; // Add 2 string

  cout << A.substr(2,3)<< endl; // Get a substring

  cout << A.find("nas");  // Find a substring

  return 0;
}