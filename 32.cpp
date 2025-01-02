#include <iostream>
using namespace std;
#include <string>
string categories(int age){
    if((age < 0) || (age > 100)){
        return "Invalid age";
    }
    else if(age < 18){
        return "Teenager";
    }
    else if((age > 18) && (age < 50)){
        return "Adult";
    }
    else{
        return "Senior";
    }
}
int main(){
    int age = 42;
    cout << categories(age);
}