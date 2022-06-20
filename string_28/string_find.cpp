#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "C++ Programming";

    cout << str.find("Pro") << endl;
    cout << str.find('r') << endl;

    if(str.find("Pro", 5) != string::npos) {
        cout << "해당 문자열을 찾았습니다.";
    } else {
        cout << "문자열을 찾지 못했습니다.";
    }

    return 0;
}