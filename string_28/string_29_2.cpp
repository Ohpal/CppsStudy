#include <iostream>
#include <string>

using namespace std;

int main() {

    string name, subject;

    cout << "이름 : " << endl;

    getline(cin, name);

    cout << "과목 : " << endl;

    getline(cin, subject);

    cout << name << "님의 과목은 : " << subject << endl;

    return 0;
}


