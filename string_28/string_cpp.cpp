#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string address, name;

    cout << "이름을 적으세요 : ";
    getline(cin, name);

    cout << "사는곳을 적으세요 : ";
    getline(cin, address);

    cout << address << "에 살고 있는 " << name << "입니다" << endl;

    return 0;
}