#include <iostream>
#include <string>
using namespace std;

string check(int arr[], int n){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] > 0){
            return "true";
        }
        else{
            return "false";
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,-5};
    int n = sizeof(arr)/sizeof(arr[0]);

    string result = check(arr ,n);

    cout << result;
}