#include <iostream>
#include <string>
using namespace std;
string trafic(string light){
    if(light == "red"){
        return "Stop";
    }
    else if(light == "yellow"){
        return "wait";
    }
    else if(light == "green"){
        return "Go Now Fast.......";
    }
    else {
        return "Invalid trafic light";
    }
}



int main() {
    string light;
    cout << "Enter a light color : ";
    cin >> light;
    
    string result = trafic(light);
    cout << result;
}