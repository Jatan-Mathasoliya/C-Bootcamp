#include <iostream>
using namespace std;
#include <string>


// 1) Made by JATAN Approch

// int main() {
//     string doc = "document.pdf";
//     int len = doc.length();
//     int start = 0;
//     int i;
    
//     for(i=0; i<len; i++){
//         if(doc[i] == '.'){
//             start = i;
//         }
//     }
//     for(i=start+1; i<len; i++){
//         cout << doc[i];
//     }
// }

// 2nd Approch----------------->

string getFileExtensionBruteForce(string filename) {

    int pos = filename.rfind('.');
    
    if (pos != string::npos && pos != 0) {

        return filename.substr(pos + 1);  
    }
    return "";  
}

int main() {
    string filename = "document.pdf";  
    
    cout << "File Extension (Brute Force): " << getFileExtensionBruteForce(filename) << endl;

    return 0;
}