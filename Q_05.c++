#include <iostream>
#include <string>
using namespace std;

string check(int age){
    if(age >= 18){
        return "Eligible";
    }
    else if((age > 0)&&(age <18)){
        return "Not eligilble";
    }
    else{
        return "Invalid age";
    }
}

int main(){
    int age = 0;
    
    string result = check(age);
    cout << result;
}

