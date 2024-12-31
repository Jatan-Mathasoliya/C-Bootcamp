#include <iostream>
using namespace std;

// 1st Approach--------------->

int find_max(int num1, int num2){
    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }
}

int main(){
    int num1 = 10;
    int num2 = 20;
    cout << find_max(num1, num2) << endl;
}


// 2nd Approach------------>

int find_max(int num1, int num2){
    cout << (num1 > num2 ? num1 : num2);
}

int main(){
    int num1 = 10;
    int num2 = 20;
     find_max(num1, num2) ;
}


// 3rd Approach---------->

int find_max(int num1, int num2){
    cout << max(num1, num2);
}

int main(){
    int num1 = 10;
    int num2 = 20;
    find_max(num1, num2) ;
}

