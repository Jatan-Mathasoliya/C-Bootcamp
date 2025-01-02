#include <iostream>
using namespace std;
#include <string>

string repeat (string word, int n){
    string str = "";
    for (int i = 0; i < n; i++){
        str = str + word;
    }
    return str;
}
int main(){
    string word = "Hello";
    int n = 5;
    cout << repeat(word , n) << endl;
}
