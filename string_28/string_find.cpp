#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "C++ Programming";

    cout << str.find("Pro") << endl;
    cout << str.find('r') << endl;

    if(str.find("Pro", 5) != string::npos) {
        cout << "�ش� ���ڿ��� ã�ҽ��ϴ�.";
    } else {
        cout << "���ڿ��� ã�� ���߽��ϴ�.";
    }

    return 0;
}