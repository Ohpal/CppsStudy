#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "ABC";
    string str2 = "ABD";

    if(str1.compare(str2) == 0) {
        cout << str1 << "이 " << str2 << "와 같습니다";
    } else if(str1.compare(str2) < 0) {
        cout << str1 << "이 " << str2 << "보다 앞에 있음";
    } else {
        cout << str1 << "이 " << str2 << "보다 뒤에 있음";
    }

    return 0;
}