#include <iostream>
using namespace std;
#include <string>

// 1st Approach -------------------->

// string check(int year){
//     if(year % 100 == 0){
//         return "Century Year";
//     }
//     else{
//         return "Not a Century Year";
//     }
// }
// int main(){
//     int year = 2000;
//     cout << check(year) << endl;
// }


// 2nd Approach---------------------->

// string check(int year){
//     return (year % 100 == 0) ? "Century Year" : "Not a Century Year";
// }

// int main(){
//     int year = 2000;
//     cout << check(year) << endl;
// }


// 3rd Approach --------------------->

// int main(){
//     int year = 2005;
//     switch(year % 100 == 0){
//         case true:
//         cout << "Century Year" << endl;
//         break;
//         case false:
//         cout << "Not a Century Year" << endl;
//     }
// }