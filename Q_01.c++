// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
string check(int number){
    if(number > 0){
        return "Positive";
    }
    else if(number < 0){
        return "Negetive";
    }
    else{
        return "Zero";
    }
}



int main() {
    int number;
    cout << "Enter a number : ";
    cin >> number;
    
    string result = check(number);
    cout << result;
}