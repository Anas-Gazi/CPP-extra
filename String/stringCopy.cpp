//The strcpy function copies the content of one string into another

#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char c1[]= "Anas";
    char c2[5];
    
    cout << strcpy(c2,c1);
       return 0;
}
//output: Anas