#include <iostream>
#include <string>

using namespace std;

int main() {

    string name, subject;

    cout << "�̸� : " << endl;

    getline(cin, name);

    cout << "���� : " << endl;

    getline(cin, subject);

    cout << name << "���� ������ : " << subject << endl;

    return 0;
}


