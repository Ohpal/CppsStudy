#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string address, name;

    cout << "�̸��� �������� : ";
    getline(cin, name);

    cout << "��°��� �������� : ";
    getline(cin, address);

    cout << address << "�� ��� �ִ� " << name << "�Դϴ�" << endl;

    return 0;
}