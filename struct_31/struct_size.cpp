#include <iostream>

using namespace std;

struct TypeSize {
    char a;
    int b;
    double c;
};

int main(void) {
    cout << "����ü TypeSize�� �� ����� ũ��� ������ ���� : " << endl;
    cout << sizeof(char) << ", " << sizeof(int) << ", " << sizeof(double) << endl;

    cout << "����ü TypeSize�� ũ��� ������ ���� : " << endl;
    cout << sizeof(TypeSize);

    return 0;
}