#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<< "Entear array size: ";
    cin >> n;
    // int arr[n];
    vector<int> arr(n);
    for(int i=0; i<n; i++){
      cin>> arr[i];
    }
    for(int i=0; i<n; i++){
      cout<< arr[i]<<" ";
    }
    return 0;
}
