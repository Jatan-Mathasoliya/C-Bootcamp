#include <iostream>
#include <string>
using namespace std;

void finder(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int even = 0;
    int odd = 0;
    int i;
    for(i=0; i<n; i++){
        if(arr[i]%2 == 0){
            even = even + 1;
        }
        else{
            odd = odd + 1;
        }
    }
    cout << "Even : " << even << endl;
    cout << "Odd : " << odd << endl;

}


int main(){
    finder();
}