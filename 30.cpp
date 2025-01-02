#include <iostream>
using namespace std;

int sum (int num){
    int odd = 0, even = 0;
    if(num == 0){
        return 0;
    }
    else{
        while(num !=0){
            int n = num % 10;
            num = num / 10;
            if(n % 2 == 0){
                even += n;
            }
            else{
                odd += n;
            }
        }
    }
    cout << "Odd sum" << odd << endl;
    cout << "Even sum" << even << endl;
}

int main(){
    int num = 1234567;
    sum(num);
}