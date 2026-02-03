#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    // Read array
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max= arr[0];
    int min= arr[0];
    for(int i=0; i<n; i++){


        if(arr[i]>max){ // Find maximum
          max= arr[i];
        }
        if (arr[i]< min){ // Find minimum
          min= arr[i];
        }
    }

    pair<int, int>number= {max, min};
    cout<<"(" << number.first <<"," <<number.second<<")"<< endl;
    return 0;
}
// This code reads 'n' integers into an array, finds the maximum and minimum values in that array, stores them in a pair, and then outputs the pair in the format (max, min).
// Example Input:
// 5
// 3 1 4 1 5
// Example Output:
// (5,1)
