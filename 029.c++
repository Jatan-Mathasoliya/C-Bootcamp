#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,7,2,11,15};
    int i, temp = 0, j;
    int n = sizeof(arr)/sizeof(arr[0]);
    bool foundPair = false;
     for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // Check if the sum of the pair equals the target
            if (arr[i] + arr[j] == 9) {
                // Output the indices of the pair
                cout << "[" << i << ", " << j << "]" << endl;
                foundPair = true;
            }
        }
    }

    // If no pair was found, print a message
    if (!foundPair) {
        cout << "No pairs found!" << endl;
    }
}