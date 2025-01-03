#include <iostream>
using namespace std;

// int main(){
//     int n = 5;
//     int i,j,k;
//     for(i=0; i<n; i++){
//         for(j=0; j<n-i-1; j++){
//             cout<<" ";
//         }
//             for(k=0; k<2*i+1; k++){
//                 cout << "*";
//             }
//         cout << endl;
//     }
// }


// 2nd Approach ---------------->

int main(){
    int n = 5;
    int i;
    while(i <= n){
        for(int x=0; x>=0; x--){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout << "*";
        }
        cout << endl;
        i++;
    }
}