#include <iostream>
using namespace std; 

int main() {
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newsize = size + 1;
    
    int newarr[newsize];
    newarr[0] = 0;
    
    int i,j;
    for(i=0; i<newsize; i++){
        newarr[i+1] = arr[i];
    }
    for(j=0; j<i; j++){
        cout << newarr[j];
    }
    
    
}