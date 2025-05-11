#include <iostream>
using namespace std;

int main()
{
   string s="Cow is a good animal and it has 4 legs";
   int count = 0;
   
   for(int i=0; i<=s.length(); i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
      count ++;
    }
   }
 cout << count;
       return 0;
}