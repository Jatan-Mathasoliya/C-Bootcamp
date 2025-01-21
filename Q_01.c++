#include <iostream>
#include <string>
using namespace std;

string grade(int score){
    if((score >= 90) && (score <= 100)){
        return "A";
    }
    else if((score >=70) && (score < 90)){
        return "B";
    }
    else if((score >= 50) && (score < 70)){
        return "C";
    }
    else if((score >= 33) && (score < 50)){
        return "D";
    }
    else if((score >= 0) && (score < 33)){
        return "F";
    }
    else{
        return "Invalid score";
    }
}

int main(){
    int score = 85;
    cout << grade(score) << endl;
}