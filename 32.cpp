#include <iostream>
using namespace std;
#include <string>

// 1st Approach -------------------->

// string categories(int age){
//     if((age < 0) || (age > 100)){
//         return "Invalid age";
//     }
//     else if(age < 18){
//         return "Teenager";
//     }
//     else if((age > 18) || (age < 50)){
//         return "Adult";
//     }
//     else{
//         return "Senior";
//     }
// }
// int main(){
//     int age = 20;
//     cout << categories(age);
// }

// 2nd Approach ---------------->

// int main(){
//     int age = -55;
//     int category = 0;
//     if((age > 0) && (age < 18)){
//         category = 1;
//     }
//     else if((age >= 18) && (age <= 50)){
//         category = 2;
//     }
//     else if((age > 50) && (age <= 100)){
//         category = 3;
//     }
//     else{
//         category = 4;
//     }

//     switch(category){
//         case 1:
//         cout << "Teenager";
//         break;
//         case 2:
//         cout << "Adult";
//         break;
//         case 3:
//         cout << "Senior";
//         break;
//         default:
//         cout << "Invalid age";
//     }
// }

// 3rd Approach ------------------>

// int main(){
//     int age = 18;
//     cout << (age < 18) ? "Teenager" : (age >= 18 && age <=50) ? "Adult" : (age > 50 && age <= 100) ? "Senior" : "Invalid age";
// }