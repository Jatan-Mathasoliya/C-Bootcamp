
#include <iostream>
#include <string>
using namespace std;

void check(){
    string username = "admin";
    int password = 123456;
    
    string name;
    int pass;
    
    cout << "Enter your name : ";
    cin >> name;
    
    cout << "Enter password : ";
    cin >> pass;
    
    if((name == username)&&(pass == password)){
        cout << "Login succsess";
    }
    else{
        cout << "Login fails";
    }
    
}

int main() {
    
    
  check();
}