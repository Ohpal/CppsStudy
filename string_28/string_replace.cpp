#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "C++ is very nice!";
    string str2 = "nice";
    string str3 = "awesome";

    string::size_type index = str1.find(str2);
    cout << "INDEX : " << index << endl;
    if(index != string::npos) {
        str1.replace(index, str2.length(), str3);
    }

    cout << str1;

    return 0;
}