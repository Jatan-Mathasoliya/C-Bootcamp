#include <iostream>
#include <string>
using namespace std;

void accending(){
    int arr[] = {4,2,1,3,5};
    int min = arr[0];
    int i,j,k;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(i=0; i<n; i++){
       for(j=i+1; j<n; j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
       }
    }
    for(k=0; k<i; k++){
        cout<<arr[k];
    }
}


int main(){
    accending();
}