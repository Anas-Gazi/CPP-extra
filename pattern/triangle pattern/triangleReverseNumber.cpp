#include <iostream>
using namespace std;

int main()
{
 int n=5;
 int i,j;
 for(i=1; i<=n; i++){
  for(j=1; j<= n-i+1; j++){
  cout << i << " ";
  }
  cout << endl;
 }

 return 0;
}

/*
ans is 
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5 
*/

/*if I use "j" insted of "i".. this will give me this ans_
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
*/

/*
i+j max = n+1
j max = (n-i) +1 this will print reverse 
*/