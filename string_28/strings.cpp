#include <iostream>

using namespace std;

int main() {
    const int SIZE = 20;
    char address[SIZE];
    char name[SIZE];

    cout << "�ڽ��� �̸��� �������� : ";
    //cin >> name;
    //cin.get(name, SIZE).get();
    cin.get(name, SIZE).ignore(SIZE, '\n');

    cout << "�ڽ��� ��� �ִ� ������ �������� : ";
    //cin >> address;
    //cin.get(address, SIZE).get();
    cin.get(address, SIZE).ignore(SIZE, '\n');

    cout << address << "�� ����ִ� " << name << "�Դϴ�" << endl;

    return 0;
}