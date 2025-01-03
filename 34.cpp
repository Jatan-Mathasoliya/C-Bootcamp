#include <iostream>
using namespace std;


int main() {

    int arr[] = {10, 20, 30, 40, 50};

    cout << "[" << arr[0] << ", " << arr[4] << "]" << endl;

    return 0;
}



int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in the array
    
    // Loop to print the first and last element
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}