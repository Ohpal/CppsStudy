#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1 = "ABC";
    string str2 = "ABD";

    if(str1.compare(str2) == 0) {
        cout << str1 << "�� " << str2 << "�� �����ϴ�";
    } else if(str1.compare(str2) < 0) {
        cout << str1 << "�� " << str2 << "���� �տ� ����";
    } else {
        cout << str1 << "�� " << str2 << "���� �ڿ� ����";
    }

    return 0;
}