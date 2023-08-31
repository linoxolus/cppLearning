#include <bits/stdc++.h>
using namespace std;

void printOutput(vector<int> arr) {
    int n = arr.size();

    for(int i = 0; i < n - 1; i++) {
        cout << arr[i] << "," ;
    }
    cout << arr[n - 1] << endl;
}

int main() {
    vector<int> myArray = {13, 43, 67};
    
    printOutput(myArray);
    
    return 0;
}