#include <iostream>
#include <string>
using namespace std;


void check(){
    
    int s1,s2,s3;
    cout << "Enter a side1 : ";
    cin >> s1;
    
    cout << "Enter a side2 : ";
    cin >> s2;
    
    cout << "Enter a side3 : ";
    cin >> s3;
    
    if((s1==s2)&&(s1==s3)&&(s2==s3)){
        cout << "Triangle is equilateral";
    }
    else if((s1==s2)&&(s2!=s3)){
        cout << "isosceles";
    }
    else if((s1==s3)&&(s1!=s2)){
        cout << "isosceles";
    }
    else if((s2==s3)&&(s3!=s1)){
        cout << "isosceles";
    }
    else{
        cout << "scalene";
    }
};




int main() {
  check();
}