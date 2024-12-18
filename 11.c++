#include <iostream>  
using namespace std; 

int removeDuplicates(int arr[], int size, int result[]) {
    int index = 0;  
    
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;  // Flag to check if an element is already added
        
        // Inner loop to check for duplicates
        for (int j = 0; j < index; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = true;  // Mark as duplicate
                break;
            }
        }
        
        // If the element is not a duplicate, add it to the new array
        if (!isDuplicate) {
            result[index++] = arr[i];
        }
    }
    
    return index;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  
    
    int result[size];  // Temporary array to store unique elements
    
    int newSize = removeDuplicates(arr, size, result);
 
    for (int i = 0; i < newSize; i++) {
        cout << result[i] << " ";
    }
}