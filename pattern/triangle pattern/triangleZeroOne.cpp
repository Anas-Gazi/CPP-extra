#include <iostream>
using namespace std;
int main()
{
 int n=5;
 int i,j;
 int a=0;
  for(i=1; i<=n; i++){
  for(j=1; j<=i; j++){
  if((i-j) %2==0){
    cout << 1 <<" ";
  }else{
    cout <<0 << " ";
  }
  }
  cout << endl;
 }
 return 0;
}

/*
ans is 
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/