#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "C++ Programming";

    cout << "str lengh : " << str.length() << endl;
    cout << "str capacity : " << str.capacity() <<  endl;
    cout << "str max_size : " << str.max_size() << endl;

    return 0;
}