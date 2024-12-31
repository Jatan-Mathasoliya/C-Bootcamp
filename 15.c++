#include <iostream>
using namespace std; 

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newarr[size-1];

    int i,j;
    for(i=0; i<size-1; i++){
        newarr[i] = arr[i];
    }

    for(j=0; j<i; j++){
        cout << newarr[j];
    }

    
    
}